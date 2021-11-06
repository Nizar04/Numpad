// Volume control simulation in Qt
// (NDE, 2015-06-17)

#include <QtWidgets>
#include "window.hpp"

Numpad::Numpad()
{
  createWidgets();
  arrangeWidgets();
  makeConnection();
  setWindowTitle("NumPad");
}

void Numpad::createWidgets(){


    LCDNum = new QLCDNumber()         ;
    GridLay = new QGridLayout         ;

    One   = new QPushButton("1")      ;
    Two   = new QPushButton("2")      ;
    Three = new QPushButton("3")      ;
    Four  = new QPushButton("4")      ;
    Five  = new QPushButton("5")      ;
    Six   = new QPushButton("6")      ;
    Seven = new QPushButton("7")      ;
    Eight = new QPushButton("8")      ;
    Nine  = new QPushButton("9")      ;
    Zero  = new QPushButton("0")      ;
    Enter = new QPushButton("Enter")  ;
}

void Numpad::arrangeWidgets()
{
          GridLay = new QGridLayout()        ;
          GridLay->addWidget(LCDNum,0,0,2,3) ;
          LCDNum->setMinimumHeight(80)       ;
          GridLay->addWidget(One,4,0)        ;
          GridLay->addWidget(Two,4,1)        ;
          GridLay->addWidget(Three,4,2)      ;
          GridLay->addWidget(Four,3,0)       ;
          GridLay->addWidget(Five,3,1)       ;
          GridLay->addWidget(Six,3,2)        ;
          GridLay->addWidget(Seven,2,0)      ;
          GridLay->addWidget(Eight,2,1)      ;
          GridLay->addWidget(Nine,2,2)       ;
          GridLay->addWidget(Zero,5,0)       ;
          GridLay->addWidget(Enter,5,1,1,2)  ;
          setLayout(GridLay);
}

void Numpad::makeConnection(){

// Reserved for the Calculator Part
}

// Implement makeConnections method here
