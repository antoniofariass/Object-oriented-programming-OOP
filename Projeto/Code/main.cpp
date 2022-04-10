#include <iostream>
#include "Funcionario.h"
#include "ListaFuncionario.h"
using namespace std;

int main() {

  cout << "\n#####################################################" << endl;
  cout << "\nSeja bem-vindo ao Sistema de Cadastro de Funcionários" << endl;
  
  ListaFuncionario lf;
  
  int cont = 0;
  
  while (cont < Tam_Max){

    int opcao;
    
    cout<<"\nOpções disponíveis:"<<"\n\t1. Adicionar Funcionário;"<< "\n\t2. Imprimir Lista de Funcionários;"<<"\n\t3. Sair do Sistema."<<endl;
    
    cout<<"\nNúmero da opção escolhida: ";
    cin>>opcao;
    cin.ignore();

    lf.executar(opcao, cont);

    if(opcao == 3)
      break;  

    else if (opcao == 1){
      cont++;
    }
  } 

  if (cont == Tam_Max){
    cout<<"\nLista Lotada...A seguir lista das pessoas cadastradas!"<<endl;
    lf.executar(3, cont);
  }

  cout<<"\nSistema encerrado.\n\n#####################################################"<<endl;

  return 0;
}