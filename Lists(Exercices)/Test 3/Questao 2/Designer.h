#ifndef DESIGNER_H
#define DESIGNER_H

#include <iostream>
using namespace std;
#include <vector>
#include "Funcionario.h"

class Designer : public Funcionario 
{
  public:
    Designer():Funcionario(){};
    Designer(string Nome, int matricula, float HT, int experiencia);
    void Realizar_Pagamento(int CH, int Mes, int Ano , string Descricao = "Salário");
    float getSalario(int CH);
    string toString();
  
};

#endif