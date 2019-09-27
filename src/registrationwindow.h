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


private:
    Ui::RegistrationWindow *ui;
};

#endif // REGISTRATIONWINDOW_H
