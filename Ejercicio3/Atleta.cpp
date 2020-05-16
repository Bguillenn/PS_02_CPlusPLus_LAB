//Incluimos la definicion de la clase y algunas librerias
//que utilizaremos
#include "Atleta.h"
#include <iostream>
#include <string>

using namespace std;

//Definimos el constructor por defecto
//Inicializa los atributos en valores
//UNDEFINED
Atleta::Atleta(){
    this->nombre = "UNDEFINED";
    this->numero = -1;
    this->nacionalidad = "UNDEFINED";
    this->tiempo = -1;
}
//Definimos el constructor que recibe valores para los parametros
Atleta::Atleta(string nom, int num, string nac, double tmp){
    this->nombre = nom;
    this->numero = num;
    this->nacionalidad = nac;
    this->tiempo = tmp;
}

//Definimos el metodo getNombre que devuelve un string
string Atleta::getNombre(){
    return nombre;
}

//Definimos el metodo getNumero que devuelve un int
int Atleta::getNumero(){
    return numero;
}

//Definimos el metodo getNacionalidad que devuelve un string
string Atleta::getNacionalidad(){
    return nacionalidad;
}

//Definimos un metodo getTiempo que devuelve un double
double Atleta::getTiempo(){
    return tiempo;
}

//Definimos el metodo setNombre que establece el nombre
void Atleta::setNombre(string nom){
    this->nombre = nom;
}

//Definimos el metodo setNumero que establece el numero
void Atleta::setNumero(int num){
    this->numero = num;
}

//Definimos el metodo setNacionalidad que establece la nacionalidad
void Atleta::setNacionalidad(string nac){
    this->nacionalidad = nac;
}

//Definimos el metodo setTiempo que establece el tiempo
void Atleta::setTiempo(double tmp){
    this->tiempo = tmp;
}

//Definimos un metodo mostrarDatos que imprime los datos del atleta
void Atleta::mostrarDatos(){
    cout<<"==========================================="<<endl;
    cout<<"> Nombre del Atleta: "<<nombre<<endl;
    cout<<"> Nacionalidad: "<<nacionalidad<<endl;
    cout<<"> Numero: "<<numero<<endl;
    cout<<"> Tiempo realizado: "<<tiempo<<endl;
    cout<<"==========================================="<<endl;
}