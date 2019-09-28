/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *password;
    QLabel *label_2;
    QLineEdit *login;
    QPushButton *enter_button;
    QPushButton *registration_button;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(700, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        LoginWindow->setMinimumSize(QSize(700, 500));
        LoginWindow->setMaximumSize(QSize(700, 500));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 120, 251, 21));
        label->setAlignment(Qt::AlignCenter);
        password = new QLineEdit(centralwidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(220, 215, 251, 29));
        password->setLayoutDirection(Qt::LeftToRight);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 190, 261, 21));
        label_2->setAlignment(Qt::AlignCenter);
        login = new QLineEdit(centralwidget);
        login->setObjectName(QStringLiteral("login"));
        login->setEnabled(true);
        login->setGeometry(QRect(220, 150, 251, 29));
        enter_button = new QPushButton(centralwidget);
        enter_button->setObjectName(QStringLiteral("enter_button"));
        enter_button->setGeometry(QRect(270, 270, 161, 41));
        enter_button->setCheckable(false);
        enter_button->setChecked(false);
        enter_button->setFlat(false);
        registration_button = new QPushButton(centralwidget);
        registration_button->setObjectName(QStringLiteral("registration_button"));
        registration_button->setGeometry(QRect(270, 340, 161, 51));
        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        enter_button->setDefault(false);


        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "LoginWindow", Q_NULLPTR));
        label->setText(QApplication::translate("LoginWindow", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginWindow", "Password", Q_NULLPTR));
        enter_button->setText(QApplication::translate("LoginWindow", "Enter", Q_NULLPTR));
        registration_button->setText(QApplication::translate("LoginWindow", "Registration", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
