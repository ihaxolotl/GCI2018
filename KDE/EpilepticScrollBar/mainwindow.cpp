/* 
 * mainwindow.cpp - Main Window 
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include "mainwindow.h"
#include <iostream>

// This code took me too long to figure out without QTCreator...
MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent)
{ 
  m_pal = palette();
  m_color = 1;

  // Setup the slider.
  m_slider = new QSlider(Qt::Horizontal);
  m_slider->setStyleSheet("background: none;");
  connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changeColor()));

  // Setup the display.
  this->setCentralWidget(m_slider);
  setStyleSheet("background-color: black;");
}

MainWindow::~MainWindow()
{
  std::cout << "Goodbye!\n" << std::endl;
}

// Value changed signal
void MainWindow::changeColor()
{
  // Change colour each time the scrollbar is updated.
  // Cover your eyes unless you want them burnt out.
  // *Brain Melts*
  switch(m_color) {
  case 1:
   setStyleSheet("background-color: red;");
   m_color = 2;
   break;

  case 2:
    setStyleSheet("background-color: orange;");
    m_color = 3;
    break;

  case 3:
    setStyleSheet("background-color: yellow;");
    m_color = 4;
    break;
    
  case 4:
   setStyleSheet("background-color: green;");
   m_color = 5;
   break;

  case 5:
    setStyleSheet("background-color: blue;");
    m_color = 6;
    break;

  case 6:
    setStyleSheet("background-color: purple;");
    m_color = 1;
    break;
  }
}
