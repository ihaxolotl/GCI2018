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

// Main Application Display
class MainWindow : public QMainWindow
{
<<<<<<< HEAD
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
=======
Q_OBJECT  
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	
private slots:
	void changeColor();
	
private:
	QSlider *m_slider;
	QPalette m_pal;
	int m_color;
>>>>>>> e113bc41ef51c44f00ebfeb6ffddfcfe4fb0bac9
};

#endif
