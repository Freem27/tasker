#ifndef CONNECTFORM_H
#define CONNECTFORM_H

#include <QDialog>

namespace Ui {
class connectForm;
}

class connectConfig{
    public:
        QString host;
        QString login;
        QString passw;
        QString dbName;
        bool isAutoConnect;
};

class connectForm : public QDialog
{
    Q_OBJECT
public:

    explicit connectForm(QWidget *parent = 0);
    ~connectForm();
    void setConfig(connectConfig conf);
    connectConfig getConfig();


signals:

private slots:
    void on_buttonBox_accepted();

private:
    connectConfig config;
    QString configPath;
    Ui::connectForm *ui;
};

#endif // CONNECTFORM_H
