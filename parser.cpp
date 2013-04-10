#include <iostream>
#include <string>
#include <ctype.h>
#include "celula.h"
#include "parser.h"

Parser::Parser(std::string s) {
  if(s.length() > 0)
    setFormula(s);
}

void Parser::setFormula(std::string s) {
  formula_raw = s;
}

/**
 * VAZIO, NUMERO, STRING, FORMULA, ERRO;
 */
unsigned short int Parser::parse() {
  if(this->formula_raw.length() < 1) {
    this->formula_result = "";
    return celulaTipo::VAZIO;
  } else if (this->checkNumber()) {
    return celulaTipo::NUMERO;
  }
  return celulaTipo::ERRO;
}

bool Parser::checkNumber() {
  for (unsigned int i = 0; i < this->formula_raw.length(); ++i)
    if(!isdigit(this->formula_raw.at(i)))
      return false;
  return true;
}
