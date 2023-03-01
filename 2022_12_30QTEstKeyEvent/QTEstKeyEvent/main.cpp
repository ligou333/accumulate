#include "QTEstKeyEvent.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTEstKeyEvent w;
    w.show();
    return a.exec();
}
