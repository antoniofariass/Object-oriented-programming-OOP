#include <iostream>
using namespace std;


class ContaDePoupanca{   
    #define taxaDeJurosAnual 3
    #define taxaDeSaque 2
    
    public:
    ContaDePoupanca(string texto,int numero);
    void calculeRendimentoMensal();
    void sacar(float valor);
    void toString();
    float getSaldo();

    private:
    float saldo;
    string titular;
};

ContaDePoupanca::ContaDePoupanca(string texto,int numero){
    titular = texto;
    saldo = numero;
}

void ContaDePoupanca::calculeRendimentoMensal(){  
    float rendimento = (saldo*taxaDeJurosAnual)/100;
    saldo += rendimento/12;
}

void ContaDePoupanca::sacar(float valor){
    if (saldo <= 0)
        cout << "Sem dinheiro em sua conta, por favor faça um deposito!";
    float saque = valor + ((valor*taxaDeSaque)/100);
    if (saque > saldo){
        cout << "Saldo insuficente para retirada!" << endl;
    }
    else{
        saldo -= saque;
        cout << "Saque realizado com sucesso!" << endl;
    }
    
}

void ContaDePoupanca::toString(){
    cout << "Titular da conta: " << titular << ", Saldo: R$" << saldo << endl;
}

float ContaDePoupanca::getSaldo(){
    return saldo;
}





