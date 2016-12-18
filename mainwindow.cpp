#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    appPath=QCoreApplication::applicationDirPath();

    s=new QSettings(appPath+"/config.ini",QSettings::IniFormat);


    connectConfig.dbName=s->value("dbName","").toString();
    connectConfig.host=s->value("dbHost","").toString();
    connectConfig.passw=s->value("dbPassw","").toString();
    connectConfig.login=s->value("dbLogin","").toString();
    connectConfig.isAutoConnect=s->value("dbIsAutoConnect",false).toBool();


    fdb=QSqlDatabase::addDatabase("QIBASE","fdb");
    if(connectConfig.isAutoConnect)
    {
        fdb.setDatabaseName(connectConfig.dbName);
        fdb.setHostName(connectConfig.host);
        fdb.setUserName(connectConfig.login);
        fdb.setPassword(connectConfig.passw);
        fdb.open();
        if(!fdb.isOpen())
            openConnectForm(true,true);
    }

    qDebug()<<fdb.isOpen();
    ui->setupUi(this);
    reloadCurrentUserInfo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openConnectForm(bool exitOnClose, bool editManual)
{
    connectForm *c=new connectForm(this);

    while(editManual or !fdb.isOpen() or fdb.lastError().text()!=" ")
    {
        editManual=false;
        c->setConfig(connectConfig);
        switch (c->exec()) {
        case connectForm::Rejected:
            if(exitOnClose)
                exit(0);
            else
            {
                fdb.setDatabaseName(connectConfig.dbName);
                fdb.setHostName(connectConfig.host);
                fdb.setUserName(connectConfig.login);
                fdb.setPassword(connectConfig.passw);
                fdb.open();
                return;
            }
            break;
        case connectForm::Accepted:
            qDebug()<<"попробовать подключиться";

            fdb.setDatabaseName(c->getConfig().dbName);
            fdb.setHostName(c->getConfig().host);
            fdb.setUserName(c->getConfig().login);
            fdb.setPassword(c->getConfig().passw);

            if(!fdb.open())
            {
                QMessageBox::information(this,"Ошибка подключения к БД",fdb.lastError().text(),QMessageBox::Ok);
                openConnectForm(exitOnClose,true);
                return;
            }else
            {
                connectConfig=c->getConfig();
                qDebug()<<"fdb успешно подключена";
                s->setValue("dbName",connectConfig.dbName);
                s->setValue("dbHost",connectConfig.host);
                s->setValue("dbPassw",connectConfig.passw);
                s->setValue("dbLogin",connectConfig.login);
                s->setValue("dbIsAutoConnect",connectConfig.isAutoConnect);
                reloadCurrentUserInfo();
            }
            break;
        default:
            qDebug()<<"deafult";
            break;
        }
    }
    delete c;
}

void MainWindow::reloadCurrentUserInfo()
{
    qDebug()<<"reloadCurrentUserInfo";
   // if(cui)
   //     delete cui;

    cui=new currentUserInfo;
    cui->login=fdb.userName();
    QSqlQuery qFdb(fdb);
    qFdb.exec("select e.id,"
              "id_dep,"
              "d.name as name_dep,"
              "id_post,"
              "p.name as name_post," //4
              "f_name,"
              "l_name,"
              "m_name,"
              "email " //8
              "from EMPLOYEES e "
              " left join departments d on d.id=e.id_dep"
              " left join posts p on p.id=e.id_post"
              " where upper(db_login)=upper('"+cui->login+"')");
    if(qFdb.next())
    {
        cui->id=qFdb.value(0).toString();
        cui->idDep=qFdb.value(1).toString();
        cui->dep=qFdb.value(2).toString();
        cui->idPost=qFdb.value(3).toString();
        cui->post=qFdb.value(4).toString();
        cui->firstName=qFdb.value(5).toString();
        cui->lastName=qFdb.value(6).toString();
        cui->middleName=qFdb.value(7).toString();
        cui->email=qFdb.value(8).toString();
        setWindowTitle("Задачник - "+cui->shortName());
    }
    else
    {
        QMessageBox::information(this,"Пользователь не зарегистрирован","Пользователь "+cui->login+" не зарегистрирован. "
                                                                                                  ,QMessageBox::Ok);
        openConnectForm(true,true);
    }
}

void MainWindow::on_pushButtonTest_clicked()
{
    openConnectForm(false,true);
}
