#include <iostream>
#include "planilha.h"
#include "celula.h"

/**
 * Construtor inicializa a planilha
 */
Planilha::Planilha(unsigned int linhas, unsigned int colunas) {
  // Setando dimensões da planilha (número definido de linhas e colunas)
  this->numero_linhas  = linhas;
  this->numero_colunas = colunas;

  // Alocando a matriz de células
  this->celulas.clear();
  for (unsigned int i = 0; i < this->numero_linhas; ++i) {
    this->celulas.push_back(std::vector<Celula*>( this->numero_linhas ));
    this->celulas[i].clear();
    for (unsigned int j = 0; j < this->numero_colunas; ++j)
      this->celulas[i].push_back(new Celula());
  }
}

/**
 * Retorna um ponteiro para uma determinada célula dada suas coordenadas dentro
 * da matriz.
 */
Celula* Planilha::getCelula(int x, int y) {
  return this->celulas[x][y];
}

/**
 * Desaloca a matriz de células
 */
Planilha::~Planilha() {
  for (unsigned int i = 0; i < this->numero_linhas; ++i) {
    for (unsigned int j = 0; j < this->numero_colunas; ++j)
      delete(this->celulas[i][j]);
    this->celulas[i].clear();
  }
  this->celulas.clear();
}
