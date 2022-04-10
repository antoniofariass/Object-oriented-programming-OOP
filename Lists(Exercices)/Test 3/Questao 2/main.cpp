#include <iostream>
using namespace std;

#include "GerenteFuncionarios.h"

int main() 
{

Funcionario* F1(new Gerente ("Joao", 1, 01, 10, 7));
Funcionario* F2(new Designer ("Gabriel", 05, 20.0, 2));
Funcionario* F3(new Engenheiro ("Lucas", 15, 40.0, 5));

GerenteFuncionarios Fun;

Fun.AddFuncionario(*F1);
Fun.AddFuncionario(*F2);
Fun.AddFuncionario(*F3);

//Matricula inexistente
Fun.Pagar(862, 10, 3, 11); 
cout << "______________________________________" << endl;
Fun.Pagar(05, 12, 4, 11);
Fun.Pagar(05, 35, 5, 11, "Pagamento Designer");
cout << "______________________________________" << endl;
Fun.ConsultarSalario(05, 20);
cout << "______________________________________" << endl;
Fun.Pagar(1, 8, 6, 2021, "Pagamento Gerente");
Fun.Pagar(1, 10, 8, 2021);
cout << "______________________________________" << endl;
Fun.ConsultarSalario(1, 100);
cout << "______________________________________" << endl;
Fun.Pagar(15, 12, 7, 2021, "Pagamento Engenheiro");
Fun.Pagar(15, 10, 4, 2021);
cout << "______________________________________" << endl;
Fun.ConsultarSalario(15, 15);
cout << "______________________________________" << endl;
Fun.BuscarFuncionario(1);
Fun.BuscarFuncionario(15);
cout << "______________________________________" << endl;
Fun.ImprimirFuncionarios();
cout << "______________________________________" << endl;
Fun.RemoverFuncionario(05);
Fun.ImprimirFuncionarios();

return 0;
}