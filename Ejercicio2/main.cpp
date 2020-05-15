//Importamos nuestra clase y algunas librerias
#include "Tanque.h"
#include <iostream>

using namespace std;

int main(){
    //Instanciamos un objeto de la clase tanque
    Tanque t;
    //Utilizamos el metodo agregar
    t.agregar(100.0);
    //Imprimimos el contenido del tanque
    cout<<"Contenido del tanque inicial: "<<t.getContenido()<<endl;
    //Utilizamos un while para ir sacando la mitad del contenido
    //hasta que el contenido sea menor a 1.0
    while( t.getContenido() >= 1.0 ){
        t.sacaMitad();
        cout<<"Sacando mitad del contenido..."<<endl;
        cout<<"Contenido del tanque: "<<t.getContenido()<<endl;
    }
    //Finalizamos el programa
    return 0;
}