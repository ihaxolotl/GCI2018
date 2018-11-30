/*
 * mainwindow.cpp - Main Window class.
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)),
            this, SLOT(displayInfo(QListWidgetItem*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Iterate over all drives in the filesystem
 * and append all found files to the list widget.
 * Linux, BSD, Mac OS X only has one root file system
 * while Windows has as many as there are hard-disks present. */
void MainWindow::listDrives()
{
    QFileInfoList drives = dir.drives();

    for (QFileInfo d : drives) {
        ui->listWidget->addItem(d.absoluteFilePath());
    }
}

/* Slot function to display all files and directories
 * inside the selected directory. */
void MainWindow::displayInfo(QListWidgetItem *item)
{
    dir.setPath(item->text());
    ui->listWidget->clear();

    /* If you're running this on Linux clicking on "/.." in the filesystem root;
     * the path will redirect back to the filesystem root as "/../.." . I'd like to remove that
     * but I'll keep it for Windows compatibility for now. It's not a major bug,
     * it just makes the display a little ugly. So don't click it. */
    for (QFileInfo file : dir.entryInfoList(QDir::NoDot | QDir::AllEntries, QDir::Name)) {
        ui->listWidget->addItem(file.absoluteFilePath());
    }

    qDebug("I'm in " + dir.absolutePath().toUtf8() + "!");
}
