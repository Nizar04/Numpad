// Volume control simulation in Qt
// (Example taken from : NDE, 2015-06-17)

#include <QApplication>
#include "window.hpp"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QWidget* window = new Numpad;
  window->show();

  return app.exec();
}
