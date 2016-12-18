#ifndef TASKFORM_H
#define TASKFORM_H

#include <QDialog>

namespace Ui {
class taskForm;
}

class taskForm : public QDialog
{
    Q_OBJECT

public:
    explicit taskForm(QWidget *parent = 0);
    ~taskForm();

private:
    Ui::taskForm *ui;
};

#endif // TASKFORM_H
