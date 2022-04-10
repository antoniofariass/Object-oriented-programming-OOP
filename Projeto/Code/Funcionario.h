#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "Endereco.h"
#include "Exibir.h"

class Funcionario: public Exibir{
  public:
    string getNome() const;
    void setNome();

    int getId() const;
    void setId();

    int getNascimento() const;
    void setNascimento();

    string getCpf() const;
    void setCpf();

    string getFuncao() const;
    void setFuncao();

    int getSalario() const;
    void setSalario();

    string getTurno() const;
    void setTurno();

    Funcionario();
    Funcionario(string nome, int id, int nascimento, string cpf, string funcao, int salario, string turno, string estado, string cidade, string cep, string rua, int numero, string bairro);

    string imprimir() const;
    
    Endereco endereco;
  
  private:
    string nome;
    int id;
    int nascimento;
    string cpf;
    string funcao;
    float salario;
    string turno;
};

#endif