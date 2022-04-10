#include "GerenteFuncionarios.h"

void GerenteFuncionarios:: AddFuncionario(Funcionario &f)
{
if (f.getMatricula() > 0)
{
for (int i = 0; i < funcionarios.size(); i++)
{
if (funcionarios[i]->getMatricula() == f.getMatricula())
{
cout << "Matrícula Repetida... Esse Funcionário Já Está Cadastrado No Sistema!" << endl;
return;
}
}

funcionarios.push_back(&f); 
}
else
{
  cout << "Nao foi possivel adicionar" << endl;
}
}
//-----------------------------------------------------------------------------
void GerenteFuncionarios::RemoverFuncionario(int Matricula)
{
for (int i = 0; i < funcionarios.size(); i++)
{
if (funcionarios[i]->getMatricula() == Matricula)
{ 
funcionarios.erase(funcionarios.begin() + i); 
cout << "Funcionário Removido Do Sistema!" << endl;
return;
}
}
cout << "A Matrícula Informada Não Existe No Sistema!" << endl;
}
//-----------------------------------------------------------------------------------
void GerenteFuncionarios::Pagar(int Matricula,int CH, int Mes, int Ano, string Descricao)
{
for (int i = 0; i < funcionarios.size(); i++)
{
if (funcionarios[i]->getMatricula() == Matricula)
{ 
funcionarios[i]->Realizar_Pagamento(CH, Mes, Ano, Descricao);
return;
}
}
cout << "A Matrícula Informada Não Existe No Sistema!" << endl;  
}
//---------------------------------------------------------------------------------
void GerenteFuncionarios::ConsultarSalario(int Matricula, int CH)
{
for (int i = 0; i < funcionarios.size(); i++)
{
if (funcionarios[i]->getMatricula() == Matricula)
{
cout << "O Funcionário Receberá: R$" << funcionarios[i]->getSalario(CH) << endl;
return;
}
}
cout << "A Matrícula Informada Não Existe No Sistema!" << endl;  
}
//-----------------------------------------------------------------------------------
void GerenteFuncionarios::BuscarFuncionario(int Matricula)
{
for (int i = 0; i < funcionarios.size(); i++)
{
if (funcionarios[i]->getMatricula() == Matricula)
{ 
cout << funcionarios[i]->toString() ;
return;
}
}
cout << "A Matrícula Informada Não Existe No Sistema!" << endl;   
}
//------------------------------------------------------------------------
void GerenteFuncionarios::ImprimirFuncionarios()
{
if (funcionarios.size() < 1)
{
cout << "Não Há Funcionários Cadastrados No Sistema!";
}
else
{
for (int i = 0; i < funcionarios.size(); i++)
{
cout << ("\nNome: " + funcionarios[i]->getNome() + "\nTempo na Empresa: " + to_string(funcionarios[i]->getExperiencia())) + " anos"<< endl;
}
}
}
