/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

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

class Ui_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(186, 168);
        gridLayout = new QGridLayout(config);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(config);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(config);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(config);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(config);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(config);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(config);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(config);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(config);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        checkBox = new QCheckBox(config);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(config);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);


        retranslateUi(config);
        QObject::connect(buttonBox, SIGNAL(accepted()), config, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), config, SLOT(reject()));

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QDialog *config)
    {
        config->setWindowTitle(QApplication::translate("config", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        label->setText(QApplication::translate("config", "\320\233\320\276\320\263\320\270\320\275:", 0));
        lineEdit->setPlaceholderText(QApplication::translate("config", "\320\233\320\276\320\263\320\270\320\275", 0));
        label_2->setText(QApplication::translate("config", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("config", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        label_3->setText(QApplication::translate("config", "\320\245\320\276\321\201\321\202:", 0));
        lineEdit_3->setPlaceholderText(QApplication::translate("config", "\320\245\320\276\321\201\321\202", 0));
        label_4->setText(QApplication::translate("config", "\320\221\320\224:", 0));
        lineEdit_4->setPlaceholderText(QApplication::translate("config", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        checkBox->setText(QApplication::translate("config", "\320\220\320\262\321\202\320\276 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
