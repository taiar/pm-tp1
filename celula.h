#include <string>

#ifndef CELULA_H
#define CELULA_H

class Celula {
private:
  std::string valor;
public:
  Celula();
  void set(std::string);
  std::string get();
  void show();
  ~Celula();
};

#endif
