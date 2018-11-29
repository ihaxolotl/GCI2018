/*
 * mainwindow.cpp - Main Window
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

/* After much debate, I finally used QTCreator.
 * Didn't want to have to break my emacs habits.
 * I actually had to use a mouse............. */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Connect slots and signals. */
    QObject::connect(ui->redSlider,   SIGNAL(valueChanged(int)), this, SLOT(changeColor()));
    QObject::connect(ui->greenSlider, SIGNAL(valueChanged(int)), this, SLOT(changeColor()));
    QObject::connect(ui->blueSlider,  SIGNAL(valueChanged(int)), this, SLOT(changeColor()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Change the colour of the MainWindow when the slider is moved. */
void MainWindow::changeColor()
{
    QString css = QString("QMainWindow {background: rgb(%1, %2, %3)}")
            .arg(ui->redSlider->value())
            .arg(ui->greenSlider->value())
            .arg(ui->blueSlider->value());

    setStyleSheet(css);
}
