#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Endereco{
    private:
    int num;
    string cep;
    
    public:
    string toString() const;
    
    int getNum() const;
    void setNum(int);
    
    string getCep() const;
    void setCep(string);
    
    Endereco();
    Endereco(int num,string cep);
};

#endif