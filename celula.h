#include <QString>

#ifndef CELULA_H
#define CELULA_H

class Celula {
private:
  QString valor;
public:
  Celula();
  void set(QString);
  QString get();
  void show(Celula*);
  ~Celula();
};

#endif
