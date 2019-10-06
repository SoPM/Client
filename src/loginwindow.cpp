#include <QDesktopWidget>
#include <QMessageBox>

#include "loginwindow.h"
#include "registrationwindow.h"
#include "ui_loginwindow.h"
#include "requestformer.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Вход в систему");
    int width = this->frameGeometry().width();
    int height = this->frameGeometry().height();
    QDesktopWidget wid;
    int screenWidth = (wid.screen())->width();
    int screenHeight = (wid.screen())->height();
    this->setGeometry((screenWidth/2)-(width/2),(screenHeight/2)-(height/2),width,height);
    /*try {
        RequestFormer::setConnection();
    }
    catch (char const* error) {
        QMessageBox::critical(this, "Error", error);
    }*/
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_enter_button_clicked()
{
    try {
        RequestFormer::login("1", "1");
    }
    catch (char const *error) {
        QMessageBox::critical(this, "Error", error);
    }
}

void LoginWindow::on_registration_button_clicked()
{
    RegistrationWindow w;
    this->hide();
    w.exec();
    this->show();
}
