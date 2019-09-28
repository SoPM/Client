#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

public slots:

private slots:

    void on_enter_button_clicked();

    void on_registration_button_clicked();


private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
