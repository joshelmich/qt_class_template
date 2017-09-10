#include "emptyclass.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    emptyClass *ec = new emptyClass();
    qDebug() << "value:" << ec->read();
    ec->write(5);
    qDebug() << "value:" << ec->read();
    delete ec;


    return a.exec();
}
