#include <iostream>
#include <string>
#include "celula.h"

Celula::Celula() {
  this->valor = "";
}

void Celula::set(std::string s) {
  this->valor = s;
}

std::string Celula::get() {
  return this->valor;
}

void Celula::show() {
  std::cout << this->valor << std::endl;
}

Celula::~Celula() {}
