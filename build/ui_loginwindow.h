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
    QLineEdit *login;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *enter_button;
    QPushButton *registration_button;

    void setupUi(QMainWindow *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName(QStringLiteral("loginwindow"));
        loginwindow->resize(700, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginwindow->sizePolicy().hasHeightForWidth());
        loginwindow->setSizePolicy(sizePolicy);
        loginwindow->setMinimumSize(QSize(700, 500));
        loginwindow->setMaximumSize(QSize(700, 500));
        centralwidget = new QWidget(loginwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 120, 251, 21));
        label->setAlignment(Qt::AlignCenter);
        login = new QLineEdit(centralwidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(220, 215, 251, 29));
        login->setLayoutDirection(Qt::LeftToRight);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 190, 261, 21));
        label_2->setAlignment(Qt::AlignCenter);
        password = new QLineEdit(centralwidget);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(true);
        password->setGeometry(QRect(220, 150, 251, 29));
        enter_button = new QPushButton(centralwidget);
        enter_button->setObjectName(QStringLiteral("enter_button"));
        enter_button->setGeometry(QRect(290, 260, 121, 30));
        enter_button->setCheckable(false);
        enter_button->setChecked(false);
        enter_button->setFlat(false);
        registration_button = new QPushButton(centralwidget);
        registration_button->setObjectName(QStringLiteral("registration_button"));
        registration_button->setGeometry(QRect(240, 330, 221, 51));
        loginwindow->setCentralWidget(centralwidget);

        retranslateUi(loginwindow);

        enter_button->setDefault(false);


        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginwindow)
    {
        loginwindow->setWindowTitle(QApplication::translate("LoginWindow", "LoginWindow", Q_NULLPTR));
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
