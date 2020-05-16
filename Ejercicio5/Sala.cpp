//Incluimos la definicion de la clase y algunas
//librerias que utilizaremos
#include "Sala.h"
#include <iostream>
#include <string>

using namespace std;

//Implementamos el constructor que recibe algunos parametros
Sala::Sala(string nom, double an, double lg, bool equip){
    this->nombre = nom;
    this->ancho = an;
    this->largo = lg;
    this->equipado = equip;
}

//Implementamos el metodo obtenerMetrosCuadrados
double Sala::obtenerMetrosCuadrados(){
    //Devuelve el largo por el ancho de la sala
    return largo * ancho;
}

//Implementamos el metodo obtenerCapacidad
int Sala::obtenerCapacidad(){
    //En base a lo escrito a la practica el aforo se calcula
    //mediante el siguiente criterio. una persona por cada 1.5 m2
    //Utilizamos el metodo que creamos anteriormente
    return (int) (obtenerMetrosCuadrados() / 1.5);
}

//Implementamos el metodo obtenerPrecio
double Sala::obtenerPrecio(){
    //En base a que si la sala esta equipada o no obtenemos el
    //precio si esta equipada el precio es de 45 por m2
    //Si no esta equipada el precio es de 32 por m2
    return (equipado) ? obtenerMetrosCuadrados() * 45.0 
                        : obtenerMetrosCuadrados() * 32.0;
}

//Implementamos el metodo mostrarInfo que muestra info
//de la sala
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