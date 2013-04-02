#include <iostream>
#include "planilha.h"
#include "celula.h"

Planilha::Planilha(unsigned int linhas, unsigned int colunas) {
  this->rows = linhas;
  this->cols = colunas;

  this->celulas.clear();
  for (unsigned int i = 0; i < this->rows; ++i) {
    this->celulas.push_back(std::vector<Celula*>());
    for (unsigned int j = 0; j < this->cols; ++j) {
      this->celulas[i].clear();
      this->celulas[i].push_back(new Celula());
    }
  }
}

Celula* Planilha::getCelula(int x, int y) {
  return this->celulas[x][y];
}

Planilha::~Planilha() {}
