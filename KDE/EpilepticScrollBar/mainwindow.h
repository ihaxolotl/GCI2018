/* 
 * mainwindow.h - Main Window 
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
  
 public:
  explicit MainWindow(QWidget *parent = 0);
  void changeRed();
  void changeBlue();
  void changeGreen();
  ~MainWindow();

 private slots:
   void changeColor();
      
 private:
   QSlider *r_slider;
   QSlider *b_slider;
   QSlider *g_slider;
   QPalette m_pal;
   int m_color;
};

#endif
