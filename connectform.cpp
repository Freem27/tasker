#include "connectform.h"
#include "ui_connectform.h"

connectForm::connectForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connectForm)
{
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->setupUi(this);
}

connectForm::~connectForm()
{
    delete ui;
}

void connectForm::setConfig(connectConfig conf)
{
    config=conf;
    ui->lineEditDbName->setText(config.dbName);
    ui->lineEditHost->setText(config.host);
    ui->lineEditLogin->setText(config.login);
    ui->lineEditPassw->setText(config.passw);
    ui->checkBoxIsAutoConnect->setChecked(config.isAutoConnect);
}

connectConfig connectForm::getConfig()
{
    return config;
}


void connectForm::on_buttonBox_accepted()
{
    config.dbName=ui->lineEditDbName->text();
    config.host=ui->lineEditHost->text();
    config.login=ui->lineEditLogin->text();
    config.passw=ui->lineEditPassw->text();
    config.isAutoConnect=ui->checkBoxIsAutoConnect->isChecked();
    accept();
}
