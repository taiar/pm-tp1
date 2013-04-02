#include <vector>
#include "celula.h"

#ifndef PLANILHA
#define PLANILHA

class Planilha {
private:
  std::vector< std::vector< Celula* > > celulas;
  unsigned int rows;
  unsigned int cols;
public:
  Planilha(unsigned int, unsigned int);
  Celula* getCelula(int, int);
  ~Planilha();
};

#endif
