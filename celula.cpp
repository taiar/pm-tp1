#include <iostream>
#include <QString>
#include "celula.h"

Celula::Celula() {}

void Celula::set(QString s) {
  this->valor = s;
}

QString Celula::get() {
  return this->valor;
}

void show(Celula *c) {
  std::cout << c->valor << std::endl;
}

Celula::~Celula() {}
