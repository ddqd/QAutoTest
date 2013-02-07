#ifndef COMPARE_H
#define COMPARE_H

#include <QObject>
class Compare : public QObject
{
  Q_OBJECT
public:
  explicit Compare(QObject *parent = 0);
  
signals:
  
public slots:
  int min(int a, int b);

  
};

#endif // COMPARE_H
