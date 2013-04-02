#include "celula.h"

#ifndef PLANILHA
#define PLANILHA

class Planilha {
private:
  Celula **celulas;
public:
  Planilha(int, int);
  Celula *getCelula(int, int);
  ~Planilha();
};

#endif
