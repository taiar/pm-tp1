#include <iostream>
#include "parser.h"
#include "planilha.h"
#include "celula.h"

int main(int argc, char const *argv[]) {

  Planilha *p = new Planilha(10, 10);
  Celula *c;
  c = p->getCelula(4, 7);

  c->set("teste");
  c->show();
  c = p->getCelula(0, 0);

  c->show();

  Parser* pa = new Parser();

  std::cout << pa->parse() << std::endl;

  delete(p);
  // delete(c);
  return 0;
}
