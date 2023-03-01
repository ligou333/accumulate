#include "EventFilterStudy.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EventFilterStudy w;
    w.show();
    return a.exec();
}
