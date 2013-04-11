#include <vector>
#include "celula.h"

#include <QtCore>
#include <QString>

#ifndef PLANILHA
#define PLANILHA

/**
 * Sobrecarga dos operadores de fluxo para gerar a entrada e saída correta de
 * tipos relacionados à planilha
 */
QDataStream &operator<<(QDataStream &out, Celula& celula);
QDataStream &operator>>(QDataStream &in, Celula& celula);

QDataStream &operator<<(QDataStream &out, Celula& celula) {
  out << celula.get_valor_expressao()
      << celula.get_valor_exibido()
      << celula.get_valor_tipo();
  return out;
}

QDataStream &operator>>(QDataStream &in, Celula& celula) {
  std::string buffer;
  celula = new Celula();
  in >> buffer;
  celula.set_valor_expressao(buffer);
  in >> buffer;
  celula.set_valor_exibido(buffer);
  in >> buffer;
  celula.set_valor_tipo(atoi(buffer));
  return in;
}

class Planilha {
private:
  /**
   * Guarda os valores das células da planilha
   */
  std::vector< std::vector< Celula* > > celulas;

  /**
   * Número de linhas da planilha
   */
  unsigned int numero_linhas;

  /**
   * Número de colunas da planilha
   */
  unsigned int numero_colunas;

  /**
   * Handle para o arquivo que contém/conterá a planilha
   */
   QFile* arquivo_handle;

  /**
   * Path do arquivo que contém/conterá a planilha
   */
  QString arquivo_path;

public:
  Planilha(unsigned int, unsigned int);
  Celula* getCelula(int, int);
  ~Planilha();

  /**
   * Funções de IO
   */
  void Abrir();
  void Salvar();
  void setArquivo(QString);
};

#endif
