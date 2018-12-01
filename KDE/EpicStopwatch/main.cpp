/*
 * main.cpp - Main.
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    /* Display the application! */
    w.show();

    return a.exec();
}
