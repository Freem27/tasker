/********************************************************************************
** Form generated from reading UI file 'taskform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFORM_H
#define UI_TASKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_taskForm
{
public:
    QGridLayout *gridLayout_4;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_2;
    QDateEdit *dateEdit_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QDateEdit *dateEdit;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *taskForm)
    {
        if (taskForm->objectName().isEmpty())
            taskForm->setObjectName(QStringLiteral("taskForm"));
        taskForm->resize(640, 475);
        gridLayout_4 = new QGridLayout(taskForm);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        plainTextEdit = new QPlainTextEdit(taskForm);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_4->addWidget(plainTextEdit, 0, 0, 2, 1);

        groupBox = new QGroupBox(taskForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        gridLayout_3->addWidget(dateEdit_2, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 1, 2, 1, 1);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_3->addWidget(checkBox_2, 2, 0, 1, 2);

        dateEdit_3 = new QDateEdit(groupBox);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));

        gridLayout_3->addWidget(dateEdit_3, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(taskForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(false);
        dateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit, 0, 1, 1, 1);

        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 2, 1);

        groupBox_3 = new QGroupBox(taskForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 4, 1);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(pushButton_3, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 2, 1);

        buttonBox = new QDialogButtonBox(taskForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(taskForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), taskForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), taskForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(taskForm);
    } // setupUi

    void retranslateUi(QDialog *taskForm)
    {
        taskForm->setWindowTitle(QApplication::translate("taskForm", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("taskForm", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0));
        label_2->setText(QApplication::translate("taskForm", "\320\224\320\260\321\202\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217:", 0));
        label->setText(QApplication::translate("taskForm", "\320\230\320\275\320\270\321\206\320\270\320\260\321\202\320\276\321\200:", 0));
        checkBox_2->setText(QApplication::translate("taskForm", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214\320\275\320\260\321\217 \320\264\320\260\321\202\320\260", 0));
        groupBox_2->setTitle(QApplication::translate("taskForm", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", 0));
        checkBox->setText(QApplication::translate("taskForm", "\320\227\320\260\320\264\320\260\321\207\320\260 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\260", 0));
        textEdit->setPlaceholderText(QApplication::translate("taskForm", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271 \320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216", 0));
        groupBox_3->setTitle(QApplication::translate("taskForm", "\320\245\320\276\320\264 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", 0));
        pushButton->setText(QApplication::translate("taskForm", "+", 0));
        pushButton_2->setText(QApplication::translate("taskForm", "ed", 0));
        pushButton_3->setText(QApplication::translate("taskForm", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class taskForm: public Ui_taskForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFORM_H
