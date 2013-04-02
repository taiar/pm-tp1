#include <string>

#ifndef CELULA_H
#define CELULA_H

class Celula {
private:
  /**
   * Valor da célula como o usuário escreveu
   */
  std::string valor_expressao;

public:
  Celula();
  void set(std::string);
  std::string get();
  void show();
  ~Celula();
};

#endif
