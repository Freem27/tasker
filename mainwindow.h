#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connectform.h"
#include "QDebug"
#include "QtSql"
#include "QMessageBox"
#include "QSettings"


class currentUserInfo{
public:
    QString id;
    QString idDep;
    QString dep;
    QString idPost;
    QString post;
    QString firstName;
    QString lastName;
    QString middleName;
    QString shortName(){
        QString f,m;
        if(firstName.length()>0)
            f=firstName.mid(0,1).toUpper()+".";
        if(middleName.length()>0)
            m=middleName.mid(0,1).toUpper()+".";
        return lastName+" "+f+m;
    }

    QString login;
    QString email;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonTest_clicked();

private:
    QSettings *s;
    void openConnectForm(bool exitOnClose=false,bool editManual=false);
    currentUserInfo *cui;
    connectConfig connectConfig;
    QSqlDatabase fdb;
    QString appPath;
    Ui::MainWindow *ui;
    void reloadCurrentUserInfo();
};

#endif // MAINWINDOW_H
