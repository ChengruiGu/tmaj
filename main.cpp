#include "jokedialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JokeDialog w;
    w.show();
    return a.exec();
}
