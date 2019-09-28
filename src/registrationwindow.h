#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QPushButton>
#include <QDialog>

namespace Ui {
class RegistrationWindow;
}

class RegistrationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationWindow(QWidget *parent = 0);
    ~RegistrationWindow();

public slots:

private slots:


    void on_registration_button_clicked();

    void on_back_button_clicked();

private:
    Ui::RegistrationWindow *ui;
};

#endif // REGISTRATIONWINDOW_H
