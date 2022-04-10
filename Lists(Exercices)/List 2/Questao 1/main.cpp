#include <iostream>
#include "Agenda.h"

using namespace std;


int main (){
  Agenda a;
  a.armazenaPessoa("Leandro", 31, "JP", "Bancários", 234);
  a.armazenaPessoa("Any", 33, "JP", "Bancários", 234);

  a.imprimePovo();
  Pessoa p;
  Endereco end("JP", "BAncário", 00);
  p.setEndereco(end);
  cout<<end.toString()<<endl;

}


