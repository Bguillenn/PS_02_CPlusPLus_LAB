//Incluimos nuestra clase y algunas librerias
#include "Sala.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    //Instanciamos 3 objetos de la clase Sala y
    //le mandamos sus atributos
    Sala sala1("Sala 1", 8.0, 12.0, true), //EQUIPADO
    sala2("Sala 2", 18.0, 20.0, false), //NO EQUIPADO
    sala3("Sala 3", 12.0, 15.0, true); //EQUIPADO

    //Creamos un arreglo que almacena las personas que asistiran
    //a los proximos 4 eventos
    int personas_eventos[4] = {200,50,100,150};

    //Con un bucle recorremos el arreglo de los eventos
    for(int i=0; i < 4; i++){
        cout<<"<<<<<<<<<||||||||||||||||| EVENTO de ["<<personas_eventos[i]<<"] personas |||||||||||||||||>>>>>>>>>"<<endl;
        cout<<"Salas posibles: "<<endl;
        //Validamos con una estructura de control que salas tienen la capacidad
        //para llevar a cabo el evento
        //Si es posible mostramos la info
        if(personas_eventos[i] <= sala1.obtenerCapacidad())
            sala1.mostrarInfo();
        if(personas_eventos[i] <= sala2.obtenerCapacidad())
            sala2.mostrarInfo();
        if(personas_eventos[i] <= sala3.obtenerCapacidad())
            sala3.mostrarInfo();
        cout<<endl;
        cout<<endl;
    }
    //Finalizamos el programa
    return 0;
}