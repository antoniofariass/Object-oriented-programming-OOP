#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Imovel.h"
#include "Casa.h"
#include "CasaComTerreno.h"
#include "Terreno.h"

int main(){
    CasaComTerreno imovel1(100000,15,3,470,10);
    cout<< imovel1.toString() << endl;
    return 0;
}