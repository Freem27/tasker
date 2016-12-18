#include "taskform.h"
#include "ui_taskform.h"

taskForm::taskForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::taskForm)
{
    ui->setupUi(this);
}

taskForm::~taskForm()
{
    delete ui;
}
