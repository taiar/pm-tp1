#include <string>

#ifndef CELULA_H
#define CELULA_H

/**
 * Mapeamento dos tipos de dados que uma célula pode representar
 */
namespace celulaTipo {
  enum {VAZIO, NUMERO, STRING, FORMULA, ERRO};
}

class Celula {
private:
  /**
   * Valor da célula como o usuário escreveu
   */
  std::string valor_expressao;

  /**
   * Valor exibido pela célula
   */
  std::string valor_exibido;

   /**
    * Tipo de dado representado na célula no estado atual
    */
   int valor_tipo;

public:
  Celula();
  void set(std::string);
  std::string get();
  void show();
  ~Celula();
};

#endif
