#ifndef PARSER_H
#define PARSER_H

#include <string>
#include "celula.h"

class Parser {
private:
  std::string formula_raw;
  std::string formula_result;

  bool checkNumber();
public:
  Parser(std::string = "");
  void setFormula(std::string);
  unsigned short int parse();
  ~Parser();
};

#endif
