#include "ncharakter.h"
#include "mainwindow.h"
#include "startwindow.h"
#include <QCoreApplication>
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  //  MainWindow w;
   // w.show();
    StartWindow k;
    k.show();
    return a.exec();
}
