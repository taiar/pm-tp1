#include <iostream>
#include "planilha.h"
#include "celula.h"

Planilha::Planilha(int cols, int rows) {
  this->celulas = (Celula**) malloc(sizeof(Celula) * cols);
  for (int i = 0; i < cols; ++i) {
    this->celulas[i] = (Celula*) malloc(sizeof(Celula) * rows);
  }
}

Celula *getCelula(int x, int y) {
  return this->celulas[x][y];
}
