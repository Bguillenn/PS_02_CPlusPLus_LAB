#include "Sala.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    Sala sala1("Sala 1", 8.0, 12.0, true), 
    sala2("Sala 2", 18.0, 20.0, false), 
    sala3("Sala 3", 12.0, 15.0, true);

    int personas_eventos[4] = {200,50,100,150};

    for(int i=0; i < 4; i++){
        cout<<"<<<<<<<<<||||||||||||||||| EVENTO de ["<<personas_eventos[i]<<"] personas |||||||||||||||||>>>>>>>>>"<<endl;
        cout<<"Salas posibles: "<<endl;
        if(personas_eventos[i] <= sala1.obtenerCapacidad())
            sala1.mostrarInfo();
        if(personas_eventos[i] <= sala2.obtenerCapacidad())
            sala2.mostrarInfo();
        if(personas_eventos[i] <= sala3.obtenerCapacidad())
            sala3.mostrarInfo();
        cout<<endl;
        cout<<endl;
    }

    return 0;
}