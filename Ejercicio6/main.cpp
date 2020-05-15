#include <iostream>
#include <string>

#include "Candado.h"

using namespace std;

int main(){
    
    Candado c1(3,5,0),
            c2(8,9,1);

    c1.setDigito(2, 9);
    
    string puede_abrir = (c2.puedeAbrir()) ? "Si":"No";
    cout<<"El candado 2 puede abrir?: "<<puede_abrir<<endl;
    string misma_combinacion = (c1.mismaCombinacionActual(c2)) ? "Si":"No";
    cout<<"Tienen la misma combinacion el Candado 1 y Candado 2? : "<<misma_combinacion<<endl;

    return 0;
}