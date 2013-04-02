#include <vector>
#include "celula.h"

#ifndef PLANILHA
#define PLANILHA

class Planilha {
private:
  /**
   * Guarda os valores das células da planilha
   */
  std::vector< std::vector< Celula* > > celulas;

  /**
   * Número de linhas da planilha
   */
  unsigned int numero_linhas;

  /**
   * Número de colunas da planilha
   */
  unsigned int numero_colunas;

public:
  Planilha(unsigned int, unsigned int);
  Celula* getCelula(int, int);
  ~Planilha();
};

#endif
