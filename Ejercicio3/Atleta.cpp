#include "Atleta.h"
#include <iostream>
#include <string>

using namespace std;

Atleta::Atleta(){
    this->nombre = "UNDEFINED";
    this->numero = -1;
    this->nacionalidad = "UNDEFINED";
    this->tiempo = -1;
}

Atleta::Atleta(string nom, int num, string nac, double tmp){
    this->nombre = nom;
    this->numero = num;
    this->nacionalidad = nac;
    this->tiempo = tmp;
}

string Atleta::getNombre(){
    return nombre;
}

int Atleta::getNumero(){
    return numero;
}

string Atleta::getNacionalidad(){
    return nacionalidad;
}

double Atleta::getTiempo(){
    return tiempo;
}

void Atleta::setNombre(string nom){
    this->nombre = nom;
}

void Atleta::setNumero(int num){
    this->numero = num;
}

void Atleta::setNacionalidad(string nac){
    this->nacionalidad = nac;
}

void Atleta::setTiempo(double tmp){
    this->tiempo = tmp;
}

void Atleta::mostrarDatos(){
    cout<<"==========================================="<<endl;
    cout<<"> Nombre del Atleta: "<<nombre<<endl;
    cout<<"> Nacionalidad: "<<nacionalidad<<endl;
    cout<<"> Numero: "<<numero<<endl;
    cout<<"> Tiempo realizado: "<<tiempo<<endl;
    cout<<"==========================================="<<endl;
}