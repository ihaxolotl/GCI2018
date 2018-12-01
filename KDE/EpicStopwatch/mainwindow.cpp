/*
 * mainwindow.cpp - Main Window class.
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sec  = new Counter(this, 1);
    min  = new Counter(this, 60);
    hour = new Counter(this, 3600);

    /* Connect all counters with their corresponding widgets. */
    connect(sec,  SIGNAL(countChanges(int)), ui->second,  SLOT(display(int)));
    connect(min,  SIGNAL(countChanges(int)), ui->minute,  SLOT(display(int)));
    connect(hour, SIGNAL(countChanges(int)), ui->hour,    SLOT(display(int)));

    /* Connect start and stop with their corresponding widgets. */
    connect(ui->start,     SIGNAL(clicked()), this, SLOT(startCounters()));
    connect(ui->terminate, SIGNAL(clicked()), this, SLOT(stopCounters()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Slot to start all three counters. */
void MainWindow::startCounters()
{
    sec->start();
    min->start();
    hour->start();
}

/* Slot to terminate all three counters. */
void MainWindow::stopCounters()
{
    sec->terminate();
    min->terminate();
    hour->terminate();
}
