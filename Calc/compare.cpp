#include "compare.h"

Compare::Compare(QObject *parent) :
  QObject(parent)
{

}

int Compare::min(int a, int b)
{
  return a<b ? a : b;
}
