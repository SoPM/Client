#include "loginwindow.h"
#include "registrationwindow.h"
#include "ui_loginwindow.h"
#include <QDesktopWidget>
#include <QMessageBox>

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
    //QPushButton enter_button;

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_enter_button_clicked()
{
    QMessageBox tmp;
    tmp.setText("WIN!");
    tmp.exec();
}

void LoginWindow::on_registration_button_clicked()
{
    RegistrationWindow w;
    w.setModal(true);
    w.exec();
}
