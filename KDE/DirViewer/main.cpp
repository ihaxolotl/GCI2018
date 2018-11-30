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

    /* Set up the application. */
    w.show();
    w.listDrives();

    return a.exec();
}
