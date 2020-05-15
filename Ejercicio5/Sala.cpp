#include "Sala.h"

#include <iostream>
#include <string>

using namespace std;

Sala::Sala(string nom, double an, double lg, bool equip){
    this->nombre = nom;
    this->ancho = an;
    this->largo = lg;
    this->equipado = equip;
}

double Sala::obtenerMetrosCuadrados(){
    return largo * ancho;
}

int Sala::obtenerCapacidad(){
    return (int) (obtenerMetrosCuadrados() / 1.5);
}

double Sala::obtenerPrecio(){
    return (equipado) ? obtenerMetrosCuadrados() * 45.0 
                        : obtenerMetrosCuadrados() * 32.0;
}

void Sala::mostrarInfo(){

    string equip = (equipado) ? "Si":"No";
    cout<<"===========[INFO DE LA SALA]==========="<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Superficie: "<<obtenerMetrosCuadrados()<<" m2"<<endl;
    cout<<"Equipado: "<< equip <<endl;
    cout<<"Precio: "<<obtenerPrecio()<<endl;
    cout<<"Aforo max: "<<obtenerCapacidad()<<endl;
    cout<<"=========[FIN INFO DE LA SALA]========="<<endl;
}