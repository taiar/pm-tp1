#include <iostream>
#include "planilha.h"
#include "celula.h"

int main(int argc, char const *argv[]) {

  Planilha *p = new Planilha(40, 20);
  Celula *c = new Celula();
  c = p->getCelula(4, 7);

  c->set("amor");
  c->show();

  delete(p);
  delete(c);
  return 0;
}
