/********************************************************************************
** Form generated from reading UI file 'connectform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTFORM_H
#define UI_CONNECTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_connectForm
{
public:
    QGridLayout *gridLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelPassw;
    QLineEdit *lineEditPassw;
    QLabel *labelHost;
    QLineEdit *lineEditHost;
    QLabel *labelDbName;
    QLineEdit *lineEditDbName;
    QCheckBox *checkBoxIsAutoConnect;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *connectForm)
    {
        if (connectForm->objectName().isEmpty())
            connectForm->setObjectName(QStringLiteral("connectForm"));
        connectForm->resize(186, 168);
        gridLayout = new QGridLayout(connectForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelLogin = new QLabel(connectForm);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));

        gridLayout->addWidget(labelLogin, 0, 0, 1, 1);

        lineEditLogin = new QLineEdit(connectForm);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        gridLayout->addWidget(lineEditLogin, 0, 1, 1, 1);

        labelPassw = new QLabel(connectForm);
        labelPassw->setObjectName(QStringLiteral("labelPassw"));

        gridLayout->addWidget(labelPassw, 1, 0, 1, 1);

        lineEditPassw = new QLineEdit(connectForm);
        lineEditPassw->setObjectName(QStringLiteral("lineEditPassw"));

        gridLayout->addWidget(lineEditPassw, 1, 1, 1, 1);

        labelHost = new QLabel(connectForm);
        labelHost->setObjectName(QStringLiteral("labelHost"));

        gridLayout->addWidget(labelHost, 2, 0, 1, 1);

        lineEditHost = new QLineEdit(connectForm);
        lineEditHost->setObjectName(QStringLiteral("lineEditHost"));

        gridLayout->addWidget(lineEditHost, 2, 1, 1, 1);

        labelDbName = new QLabel(connectForm);
        labelDbName->setObjectName(QStringLiteral("labelDbName"));

        gridLayout->addWidget(labelDbName, 3, 0, 1, 1);

        lineEditDbName = new QLineEdit(connectForm);
        lineEditDbName->setObjectName(QStringLiteral("lineEditDbName"));

        gridLayout->addWidget(lineEditDbName, 3, 1, 1, 1);

        checkBoxIsAutoConnect = new QCheckBox(connectForm);
        checkBoxIsAutoConnect->setObjectName(QStringLiteral("checkBoxIsAutoConnect"));

        gridLayout->addWidget(checkBoxIsAutoConnect, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(connectForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);


        retranslateUi(connectForm);

        QMetaObject::connectSlotsByName(connectForm);
    } // setupUi

    void retranslateUi(QDialog *connectForm)
    {
        connectForm->setWindowTitle(QApplication::translate("connectForm", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        labelLogin->setText(QApplication::translate("connectForm", "\320\233\320\276\320\263\320\270\320\275:", 0));
        lineEditLogin->setPlaceholderText(QApplication::translate("connectForm", "\320\233\320\276\320\263\320\270\320\275", 0));
        labelPassw->setText(QApplication::translate("connectForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        lineEditPassw->setPlaceholderText(QApplication::translate("connectForm", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        labelHost->setText(QApplication::translate("connectForm", "\320\245\320\276\321\201\321\202:", 0));
        lineEditHost->setPlaceholderText(QApplication::translate("connectForm", "\320\245\320\276\321\201\321\202", 0));
        labelDbName->setText(QApplication::translate("connectForm", "\320\221\320\224:", 0));
        lineEditDbName->setPlaceholderText(QApplication::translate("connectForm", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        checkBoxIsAutoConnect->setText(QApplication::translate("connectForm", "\320\220\320\262\321\202\320\276 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class connectForm: public Ui_connectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTFORM_H
