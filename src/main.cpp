#include <QApplication>

#include "loginwindow.h"
#include "requestformer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;

    w.show();

    return a.exec();
}
