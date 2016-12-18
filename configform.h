#ifndef CONFIGFORM_H
#define CONFIGFORM_H

#include <QDialog>

namespace Ui {
class configForm;
}

class configForm : public QDialog
{
    Q_OBJECT

public:
    explicit configForm(QWidget *parent = 0);
    ~configForm();

private:
    Ui::configForm *ui;
};

#endif // CONFIGFORM_H
