/* 
 * main.cpp - Main 
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include <QApplication>
#include "mainwindow.h"

// I wish for a centered window.
int main(int argc, char **argv)
{
  QApplication app(argc, argv);
  //QDesktopWidget wid;
  MainWindow trippy;

  /* I don't know what exploded here!!!!
  int width = trippy.frameGeometry().width();
  int height = trippy.frameGeometry().height();
  int screenWidth = wid.screen()->width();
  int screenHeight = wid.screen()->height();
  
  trippy.setGeometry((screenWidth / 2) - (width / 2),
		     (screenHeight / 2) - (height / 2),
		     width, height);
  */
  trippy.resize(320, 240);
  trippy.setWindowTitle("This was not my fault...");
  trippy.show();
  
  return app.exec();
}
