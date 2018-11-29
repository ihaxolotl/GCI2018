/*
 * mainwindow.h - Main Window
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void changeColor();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
