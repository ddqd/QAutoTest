#include "comparetest.h"
#include <QTest>
#include "../Calc/compare.h"
CompareTest::CompareTest(QObject *parent) :
  QObject(parent)
{

}

void CompareTest::min()
{
  Compare a;
  QCOMPARE(a.min(1,   0), 0);
  QCOMPARE(a.min(-1,  1), -1);
  QCOMPARE(a.min(4,   8), 4);
  QCOMPARE(a.min(0,   0), 0);
  QCOMPARE(a.min(1,   1), 1);
  QCOMPARE(a.min(-10,-5), -10);
}
