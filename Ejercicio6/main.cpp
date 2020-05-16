//Incluimos unas librerias y nuestra clase
#include <iostream>
#include <string>
#include "Candado.h"

using namespace std;

int main(){
    //Instanciamos dos objetos de la clase Candado
    Candado c1(3,5,0), //CLAVE 3,5,0 ACTUAL: 0,0,0
            c2(8,9,1); //CLAVE 8,9,1 ACTUAL: 0,0,0
    //Cambiamos el segundo digito del candado 1 por 9
    c1.setDigito(2, 9); //C1 ACTUAL 0,9,0
    
    //MOSTRAMOS SI EL CANDADO DOS SE PUEDE ABRIR O NO
    string puede_abrir = (c2.puedeAbrir()) ? "Si":"No";
    cout<<"El candado 2 puede abrir?: "<<puede_abrir<<endl;
    //MOSTRAMOS SI EL C1 TIENE LA MISMA COMBINACION QUE C2
    string misma_combinacion = (c1.mismaCombinacionActual(c2)) ? "Si":"No";
    cout<<"Tienen la misma combinacion el Candado 1 y Candado 2? : "<<misma_combinacion<<endl;

    return 0;
}