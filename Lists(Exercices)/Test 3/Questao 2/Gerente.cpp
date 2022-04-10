#include "Gerente.h"

Gerente::Gerente(string nome, int matricula, float HT, int experiencia, int NE):Funcionario(nome, matricula, HT, experiencia)
{
  this-> NE = NE;
}

void Gerente::Realizar_Pagamento(int CH, int Mes, int Ano , string Descricao)
{
float SalarioGerente = CH * HT * NE;

cout << "Salário: R$" << SalarioGerente << endl;

HistoricoPG.push_back("\nPagamento Realizado - " + to_string(Mes) + "/" + to_string(Ano) + "\nPagamento: R$" + to_string(SalarioGerente) + "\nDescrição: " + Descricao + "\n");
}

float Gerente:: getSalario(int CH)
{
float SalarioGerente = CH * NE * HT;
return SalarioGerente;
}


string Gerente::toString()
{
string Pagamentos;
if (HistoricoPG.size() == 0)
{
Pagamentos = "Nenhum Pagamento Realizado Até o Momento.";
}
else
{
for (int i =0; i < HistoricoPG.size() ; i++)
{
Pagamentos += HistoricoPG[i];
}
}

return ("\nNome: " +nome + "\nMatrícula: " + to_string(matricula) + "\nCargo: Gerente" +"\nNúmero De Equipes: " + to_string(NE) + "\nValor da Hora De Trabalho: R$" + to_string(HT) +"\nTempo na Empresa : " + to_string(experiencia) + " anos" );
}