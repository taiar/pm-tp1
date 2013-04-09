#include <iostream>
#include <string>
#include "celula.h"

Celula::Celula() {
  this->valor_expressao = "";
  this->valor_exibido   = "";
  this->valor_tipo      = celulaTipo::VAZIO;
}

void Celula::set_valor_expressao(std::string s) {
  this->valor_expressao = s;
}
std::string Celula::get_valor_expressao() {
  return this->valor_expressao;
}
void Celula::show_valor_expressao() {
  std::cout << this->valor_expressao << std::endl;
}

void Celula::set_valor_exibido(std::string s) {
  this->valor_exibido = s;
}
std::string Celula::get_valor_exibido() {
  return this->valor_exibido;
}
void Celula::show_valor_exibido() {
  std::cout << this->valor_exibido << std::endl;
}

void Celula::set_valor_tipo(int i) {
  this->valor_tipo = i;
}
int Celula::get_valor_tipo() {
  return this->valor_tipo;
}
void Celula::show_valor_tipo() {
  std::cout << this->valor_tipo << std::endl;
}

Celula::~Celula() {}
