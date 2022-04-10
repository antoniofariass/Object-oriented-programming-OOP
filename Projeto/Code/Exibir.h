#ifndef EXIBIR_H
#define EXIBIR_H
#include <iostream>
using namespace std;

class Exibir{
	public:
		virtual string imprimir() const = 0;
};

#endif