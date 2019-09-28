/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QWidget *centralwidget;
    QPushButton *registration_button;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *back_button;

    void setupUi(QDialog *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName(QStringLiteral("RegistrationWindow"));
        RegistrationWindow->resize(700, 500);
        centralwidget = new QWidget(RegistrationWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 771, 481));
        registration_button = new QPushButton(centralwidget);
        registration_button->setObjectName(QStringLiteral("registration_button"));
        registration_button->setGeometry(QRect(230, 290, 211, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 140, 251, 21));
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 160, 251, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 210, 251, 21));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 230, 251, 29));
        back_button = new QPushButton(centralwidget);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(30, 30, 106, 30));

        retranslateUi(RegistrationWindow);

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QDialog *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QApplication::translate("RegistrationWindow", "MainWindow", Q_NULLPTR));
        registration_button->setText(QApplication::translate("RegistrationWindow", "Registration", Q_NULLPTR));
        label->setText(QApplication::translate("RegistrationWindow", "Employee code", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegistrationWindow", "Password", Q_NULLPTR));
        back_button->setText(QApplication::translate("RegistrationWindow", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
