#include <iostream>
#include <string>
#include "celula.h"

Celula::Celula() {
  this->valor_expressao = "";
  this->valor_exibido   = "";
  this->valor_tipo      = celulaTipo::VAZIO;
}

void Celula::set(std::string s) {
  this->valor_expressao = s;
}

std::string Celula::get() {
  return this->valor_expressao;
}

void Celula::show() {
  std::cout << this->valor_expressao << std::endl;
}

Celula::~Celula() {}
