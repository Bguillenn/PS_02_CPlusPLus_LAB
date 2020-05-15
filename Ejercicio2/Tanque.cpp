#include <iostream>
//Incluimos la definicion de la clase
//Para implementar sus metodos
#include "Tanque.h"

using namespace std;

//Definimos el constructor
Tanque::Tanque() {}

//Definimos el metodo getContenido
double Tanque::getContenido() const{
    return this->contenido;
}

//Definimos el metodo agregar
void Tanque::agregar(double cantidad){
    if( (this->contenido + cantidad) > Tanque::capacidad ){
        cout<<"No puedes añadir esta cantidad ya que supera la capacidad del tanque"<<endl;
        return;
    }

    this->contenido += cantidad;
}

//Definimos el metodo sacar
void Tanque::sacar(double cantidad){
    if( (this->contenido - cantidad) < 0 ) {
        cout<<"No hay contenido suficiente para sacar esta cantidad"<<endl;
        return;
    }

    this->contenido -= cantidad;
}

//Definimos el metodo sacaMitad
void Tanque::sacaMitad(){
    if(getContenido() <= 0) return;
    this->contenido /= 2;
}