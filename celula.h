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

  void set_valor_expressao(std::string);
  std::string get_valor_expressao();
  void show_valor_expressao();

  void set_valor_exibido(std::string);
  std::string get_valor_exibido();
  void show_valor_exibido();

  void set_valor_tipo(int);
  int get_valor_tipo();
  void show_valor_tipo();

  ~Celula();
};

#endif
