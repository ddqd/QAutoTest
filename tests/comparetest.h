#ifndef COMPARETEST_H
#define COMPARETEST_H
#include "AutoTest.h"
#include <QObject>

class CompareTest : public QObject
{
  Q_OBJECT
public:
  explicit CompareTest(QObject *parent = 0);
  
signals:
  
public slots:
private slots:
  void min();
};
DECLARE_TEST(CompareTest)
#endif // COMPARETEST_H
