#include <iostream>
#include "Agenda.h"
using namespace std;

void Agenda::armazenaPessoa(string nome, int idade, string cidade, string bairro, int numero){
  bool check =false;
  int pos=0;
  for (int i=0;i<10;i++){
    if (Povo[i].getNome()=="-"){
      check=true;
      pos=i;
      break;
    }
  }
  if(check){
    Pessoa p(nome, idade, cidade, bairro, numero);
    Povo[pos]=p;
    //Povo[pos].setNome(nome);
    //Povo[pos].setIdade(idade);
    //Endereco e(cidade, bairro, numero);
    //Povo[pos].setEndereco(e);
    cout<<"Add na agenda consucesso!"<<endl;
  }
  else{
    cout<<"Agenda lotada!"<<endl;
  } 
}

void Agenda::imprimePovo(){
  for (int i=0;i<10;i++){
    if (Povo[i].getNome()=="-"){
      continue;
    }
    cout<<Povo[i].toString()<<endl;
  }
}

int Agenda::buscaPessoa(string nome){
  for (int i=0;i<10;i++){
    if (Povo[i].getNome()==nome){
      return i;
    }
  }
  return -1;
}

void Agenda::imprimePessoa(int i){
  if (i>=0 && i<10){
    if (Povo[i].getNome()!="-")
      cout<< Povo[i].toString()<<endl;
    else
      cout<< "Não tem nenhum contato nessa pos."<<endl;
  }
  else
    cout<< "Pos inválida!."<<endl;
}

void Agenda::removePessoa(string nome){
  bool check=false;
  for (int i=0;i<10;i++){
    if (Povo[i].getNome()==nome){
      Povo[i].setNome("-");
      check=true;
    }
  }
  if (check)
     cout<< "Pessoa removida!"<<endl;
  else
     cout<< "Nome não encontrado, tente de novo!"<<endl;
}