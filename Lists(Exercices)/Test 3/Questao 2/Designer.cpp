#include "Designer.h"

Designer::Designer(string nome, int matricula, float HT, int experiencia):Funcionario(nome, matricula, HT, experiencia){
}

void Designer::Realizar_Pagamento(int CH, int Mes, int Ano , string Descricao)
{

float SalarioDesigner = CH * HT;

cout << "Salario: R$" << SalarioDesigner << endl;

HistoricoPG.push_back("\nPagamento Realizado - " + to_string(Mes) + "/" + to_string(Ano) + "\nPagamento: R$" + to_string(SalarioDesigner) + "\nDescrição: " + Descricao + "\n");
}

float Designer::getSalario(int CH)
{
float SalarioDesigner = CH * HT;
return SalarioDesigner;
}

string Designer::toString()
{
string Pagamentos;

if (HistoricoPG.size() == 0)
{
Pagamentos = "Nenhum pagamento realizado.";
}
else
{
for (int i =0; i < HistoricoPG.size() ; i++)
{Pagamentos += HistoricoPG[i];
}
}


return ("\nNome: " + nome + "\nMatrícula: " + to_string(matricula) + "\nCargo: Designer" + "\nValor da Hora De Trabalho: R$" + to_string(HT) + "\nTempo na Empresa: " + to_string(experiencia) + " anos" + "\nHistórico De Pagamento Do Funcionário:\n" + Pagamentos);
}