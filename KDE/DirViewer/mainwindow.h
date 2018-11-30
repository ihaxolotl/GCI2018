/*
 * mainwindow.h - Main Window interface.
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QListWidgetItem>

namespace Ui {
    class MainWindow;
}

/* Main window class */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void listDrives();

public slots:
    void displayInfo(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QDir dir;
};

#endif // MAINWINDOW_H
