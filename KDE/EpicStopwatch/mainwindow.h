/*
 * mainwindow.h - Main Window interface.
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "counter.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void startCounters();
    void stopCounters();

private:
    Ui::MainWindow *ui;
    Counter *sec;
    Counter *min;
    Counter *hour;
};

#endif // MAINWINDOW_H
