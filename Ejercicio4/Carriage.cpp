#include "Carriage.h"

#include <iostream>
#include <string>

using namespace std;

Carriage::Carriage(){
    this -> primera_clase = false;
    this -> asientos_ocupados = 0;
}

void Carriage::setPrimeraClase(bool p_clase){
    this -> primera_clase = p_clase;
}

bool Carriage::esPrimeraClase(){
    return this->primera_clase;
}

void Carriage::venderAsiento(){
    if(asientos_ocupados >= 40){
        cout<<"No puedes vender un asiento porque este vagon esta lleno"<<endl;
        return;
    }

    this->asientos[asientos_ocupados] = true;
    asientos_ocupados++;
}

void Carriage::ofrecerAsiento(){
    int num = rand() % 100 + 1;
    if(primera_clase)
        if(num <= 10) venderAsiento();
    else
        if(num <= 40) venderAsiento();
}

int Carriage::asientosOcupados(){
    return asientos_ocupados;
}
