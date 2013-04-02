#include <iostream>
#include <stdlib.h>
#include "planilha.h"
#include "celula.h"

Planilha::Planilha(unsigned int cols, unsigned int rows) {
  this->rows = rows;
  this->cols = cols;
  this->celulas = (Celula**) malloc(sizeof(Celula*) * this->cols);
  for (unsigned int i = 0; i < cols; ++i) {
    this->celulas[i] = (Celula*) malloc(sizeof(Celula) * this->rows);
  }
}

Celula* Planilha::getCelula(int x, int y) {
  return &this->celulas[x][y];
}

Planilha::~Planilha() {
  for (unsigned int i = 0; i < this->cols; ++i)
    free(this->celulas[i]);
  free(this->celulas);
}
