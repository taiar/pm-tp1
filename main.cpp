#include <iostream>
#include "parser.h"
#include "planilha.h"
#include "celula.h"

int main(int argc, char const *argv[]) {

  Planilha *p = new Planilha(10, 10);
  Celula *c;
  c = p->getCelula(4, 7);

  c->set_valor_expressao("teste");
  c->show_valor_expressao();
  c = p->getCelula(0, 0);

  c->show_valor_expressao();

  Parser* pa = new Parser("6a");

  std::cout << pa->parse() << std::endl;

  p->setArquivo("./teste.txt");
  p->Salvar();

  delete(p);
  // delete(c);
  return 0;
}
