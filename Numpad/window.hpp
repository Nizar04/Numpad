// Volume control simulation in Qt
// (NDE, 2015-06-17)

#pragma once

#include <QWidget>
#include <QCoreApplication>
#include <QWidget>
#include <QLabel>
#include <QApplication>
#include <QLCDNumber>
#include <QGridLayout>
#include <QPushButton>
#include <QObject>

class QLCDNumber;
class QPushButton;

class Numpad: public QWidget
{
  public:
    Numpad();

  private:
    void createWidgets();
    void arrangeWidgets();
    void makeConnection();
    // declare makeConnections method here

    QLCDNumber* LCDNum;
    QGridLayout* GridLay;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *Four;
    QPushButton *Five;
    QPushButton *Six;
    QPushButton *Seven;
    QPushButton *Eight;
    QPushButton *Nine     ;
    QPushButton *Zero;
    QPushButton *Enter  ;
};
