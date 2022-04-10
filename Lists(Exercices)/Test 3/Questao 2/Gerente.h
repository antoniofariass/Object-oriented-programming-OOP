#ifndef GERENTE_H
#define GERENTE_H

#include <iostream>
using namespace std;
#include <vector>
#include "Funcionario.h"

class Gerente : public Funcionario{
  protected:
    int NE;
  public:
    Gerente():Funcionario(){};
    Gerente(string nome, int matricula, float HT, int experiencia, int NE);
    void Realizar_Pagamento(int CH, int Mes, int Ano , string Descricao = "Salário");
    float getSalario(int CH);
    string toString();
   
};

#endif