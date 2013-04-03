#include <iostream>
#include "celula.h"
#include "parser.h"

Parser::Parser(std::string s) {
  if(s.length() > 0)
    setFormula(s);
}

void Parser::setFormula(std::string s) {
  formula_raw = s;
}

unsigned short int Parser::parse() {
  return celulaTipo::FORMULA;
}
