#include "planilha.h"
#include "celula.h"

int main(int argc, char const *argv[]) {

  Planilha *p = new Planilha(40, 20);
  Celula *c = p->getCelula(1, 1);
  c->set("=2+3+5");
  return 0;
}
