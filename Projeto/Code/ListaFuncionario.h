#ifndef LISTAFUNCIONARIO_H
#define LISTAFUNCIONARIO_H
#include "Funcionario.h"

const int Tam_Max = 10;

class ListaFuncionario: public Funcionario{
  public:
    void executar(int opcao, int cont);
    
  private:
    Funcionario *listaFuncionario[Tam_Max];
    Funcionario *funcionario;
};

#endif