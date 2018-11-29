/* 
 * mainwindow.cpp - Main Window 
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include "mainwindow.h"
#include <iostream>

// This code took me too long to figure out without QTCreator...
MainWindow::MainWindow(QWidget *parent) :
<<<<<<< HEAD
  QMainWindow(parent)
{ 
  m_pal = palette();
  m_color = 1;

  // Setup the slider.
  r_slider = new QSlider(Qt::Horizontal);
  g_slider = new QSlider(Qt::Horizontal);
  b_slider = new QSlider(Qt::Horizontal);
  
  r_slider->setStyleSheet("background: none;");
  g_slider->setStyleSheet("background: none;");
  b_slider->setStyleSheet("background: none;");
  
  connect(r_slider, SIGNAL(valueChanged(int)), this, SLOT(changeColor()));
  connect(g_slider, SIGNAL(valueChanged(int)), this, SLOT(changeColor()));
  connect(b_slider, SIGNAL(valueChanged(int)), this, SLOT(changeColor()));

  // Setup the display.
  this->setCentralWidget(m_slider);
  setStyleSheet("background-color: black;");
=======
	QMainWindow(parent)
{
	m_pal = palette();
	m_color = 1;

	// Setup the slider
	m_slider = new QSlider(Qt::Horizontal);
	m_slider->setStyleSheet("background: none;");
	connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changeColor()));
        
	// Setup the display.
	this->setCentralWidget(m_slider);
	setStyleSheet("background-color: black;");
>>>>>>> e113bc41ef51c44f00ebfeb6ffddfcfe4fb0bac9
}

MainWindow::~MainWindow()
{
	std::cout << "Goodbye!\n" << std::endl;
}

// Value changed signal
void MainWindow::changeColor()
{
<<<<<<< HEAD
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
=======
	// Change colour each time the scrollbar is updated.
	// Cover your eyes unless you want them burnt out.
	// *Brain Melts*
	switch(m_color){
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
>>>>>>> e113bc41ef51c44f00ebfeb6ffddfcfe4fb0bac9
}
