#ifndef ENDERECO_H_
#define ENDERECO_H_
#include <iostream>
using namespace std;

class Endereco {
  private:
    string cidade;
    string bairro;
    int num;
  public:
    Endereco();
    Endereco(string cidade, string bairro, int num);

    /*
    void setCidade(string cidade);
    void setBairro(string Bairro);
    void setNum(int num);
   
    string getCidade();
    string getBairro();
    int getNum();
    */
    void setBairro(string Bairro);

    string toString() const;
};

#endif /* ENDERECO_H_ */