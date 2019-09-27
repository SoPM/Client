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
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *registrationwindow)
    {
        if (registrationwindow->objectName().isEmpty())
            registrationwindow->setObjectName(QStringLiteral("registrationwindow"));
        registrationwindow->resize(800, 600);
        centralwidget = new QWidget(registrationwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 771, 481));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 290, 211, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 130, 141, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(260, 160, 251, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 210, 80, 21));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 230, 251, 29));

        retranslateUi(registrationwindow);

        QMetaObject::connectSlotsByName(registrationwindow);
    } // setupUi

    void retranslateUi(QDialog *registrationwindow)
    {
        registrationwindow->setWindowTitle(QApplication::translate("RegistrationWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RegistrationWindow", "Registration", Q_NULLPTR));
        label->setText(QApplication::translate("RegistrationWindow", "Employee code", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegistrationWindow", "Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
