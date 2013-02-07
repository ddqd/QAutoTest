#include <QCoreApplication>
#include <QDebug>
#include "compare.h"
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Compare b;
  qDebug()<<b.min(1,20);
  return a.exec();
}
