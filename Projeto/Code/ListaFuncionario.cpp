#include "ListaFuncionario.h"

void ListaFuncionario::executar(int opcao, int cont){

  if (opcao == 2 || opcao ==3){
    cout << "\n#####################################################" << endl;
    cout << "\nLISTA DE FUNCIONÁRIOS\n" << endl;

    if (cont == 0)
      cout << "\tVazia!" << endl; 

    else{
      for (int i = 0; i < cont; i++){
        cout <<  listaFuncionario[i] -> imprimir() << "\n" << endl;
      }
    }
  }

  else if (opcao == 1){

    if (cont > Tam_Max){
      cout << "Lista cheia!\n\n#####################################################" <<endl;
    }

    else{
      if (opcao == 1){

        //Funcionario
        funcionario = new Funcionario;
        funcionario -> setNome();
        funcionario -> setId();
        funcionario -> setNascimento();
        funcionario -> setCpf();
        funcionario -> setFuncao();
        funcionario -> setSalario();
        funcionario -> setTurno();

        //Endereço
        funcionario -> endereco.setEstado();
        funcionario -> endereco.setCidade();
        funcionario -> endereco.setCep();
        funcionario -> endereco.setRua();
        funcionario -> endereco.setNumero();
        funcionario -> endereco.setBairro();

        listaFuncionario[cont] = funcionario;

        cout << "\nFuncionário cadastrado no sistema!\n\n#####################################################" << endl;
      }  
    }
  }
  
  else{
    cout<<"\nOpção inválida, tente novamente!"<<endl;
  }
 
}