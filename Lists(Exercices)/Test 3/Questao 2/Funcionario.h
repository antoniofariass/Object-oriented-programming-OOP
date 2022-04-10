#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


#include <iostream>
using namespace std;
#include <vector>

class Funcionario{
  protected:
    string nome;
    int matricula;
    float HT;
    int experiencia; 
    vector<string> HistoricoPG;
  public:
    Funcionario(){};
    Funcionario(string nome, int matricula, float HT, int experiencia);
    virtual void Realizar_Pagamento(int CH, int Mes, int Ano , string Descricao = "Salário")=0;
    virtual float getSalario(int CH)=0;
    virtual string toString()=0;
    int getMatricula();
    string getNome();
    int getExperiencia();
};

#endif