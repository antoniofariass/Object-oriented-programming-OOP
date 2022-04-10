#include "EngenheiroDeSoftware.h"

Engenheiro::Engenheiro(string nome, int matricula, float HT, int experiencia):Funcionario(nome, matricula, HT, experiencia){
  
if (experiencia > -1 && experiencia < 3)
{
Nivel = "Júnior";
Adicional = 500.00;
}

else if (experiencia > 2 && experiencia < 6)
{
Nivel = "Pleno 1";
Adicional = 1500.00;
}

else if (experiencia > 5 && experiencia < 9)
{
Nivel = "Pleno 2";
Adicional = 2500.00;
}

else if (experiencia > 8)
{
Nivel = "Sênior";
Adicional = 3500.00;
}
}


void Engenheiro::Realizar_Pagamento(int CH, int Mes, int Ano , string Descricao)
{

float SalarioEngenheiro = (CH * HT) + Adicional;

cout << "Valor: R$" << SalarioEngenheiro << endl;


HistoricoPG.push_back("\nPagamento Realizado - " + to_string(Mes) + "/" + to_string(Ano) + "\nPagamento: R$" + to_string(SalarioEngenheiro) + "\nDescrição: " + Descricao + "\n");
}

float Engenheiro::getSalario(int CH)
{
float SalarioEngenheiro = (CH * HT) + Adicional;
return SalarioEngenheiro;
}

string Engenheiro::toString()
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

return ("\nNome: " + nome + "\nMatrícula: " + to_string(matricula) + "\nCargo: Engenheiro De Software" + "\nNível Do Engenheiro: " + Nivel + "\nValor da Hora De Trabalho: R$" + to_string(HT) + "\nTempo na Empresa: " + to_string(experiencia) + " anos" + "\nHistórico De Pagamento Do Funcionário:\n" + Pagamentos);
}