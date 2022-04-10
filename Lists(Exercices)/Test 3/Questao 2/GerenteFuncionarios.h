#ifndef GERENTEFUNCIONARIOS_H
#define GERENTEFUNCIONARIOS_H

#include <vector>
#include "Gerente.h"
#include "EngenheiroDeSoftware.h"
#include "Designer.h"
#include "Funcionario.h"

class GerenteFuncionarios
{
  private:
    vector <Funcionario*> funcionarios;
  public:
    GerenteFuncionarios(){};
    void AddFuncionario( Funcionario &f);
    void RemoverFuncionario(int matricula);
    void Pagar(int matricula,int CH, int Mes, int Ano, string Descricao = "Salário");
    void ConsultarSalario(int matricula, int CH);
    void BuscarFuncionario(int matricula);
    void ImprimirFuncionarios();
};


#endif
