#include "registrationwindow.h"
#include "loginwindow.h"
#include "ui_registrationwindow.h"
#include <QDesktopWidget>
#include <QMessageBox>

RegistrationWindow::RegistrationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrationWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Вход в систему");
    int width = this->frameGeometry().width();
    int height = this->frameGeometry().height();
    QDesktopWidget wid;
    int screenWidth = (wid.screen())->width();
    int screenHeight = (wid.screen())->height();
    this->setGeometry((screenWidth/2)-(width/2),(screenHeight/2)-(height/2),width,height);

}

RegistrationWindow::~RegistrationWindow()
{
    delete ui;
}
