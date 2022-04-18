#include "ibntoolmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IBNToolMainWindow w;
    w.show();
    return a.exec();
}
