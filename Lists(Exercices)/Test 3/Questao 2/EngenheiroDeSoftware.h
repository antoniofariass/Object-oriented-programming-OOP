#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
using namespace std;
#include <vector>
#include "Funcionario.h"

class Engenheiro : public Funcionario
{
  private:
    string Nivel;
    float Adicional = 0;
  public:
    Engenheiro():Funcionario(){};
    Engenheiro(string nome, int matricula, float HT, int experiencia);
    void Realizar_Pagamento(int CH, int Mes, int Ano , string Descricao = "Salário");
    float getSalario(int CH);
    string toString();
};

#endif