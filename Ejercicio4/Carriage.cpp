//Incluimos la definicion de la clase y algunas librerias
#include "Carriage.h"
#include <iostream>
#include <string>

using namespace std;

//Definimos el constructor de la clase
Carriage::Carriage(){
    this -> primera_clase = false;
    this -> asientos_ocupados = 0;
}

//Definimos el metodo setPrimeraClase
void Carriage::setPrimeraClase(bool p_clase){
    this -> primera_clase = p_clase;
}

//Definimos el metodo esPrimeraClase devuelve un bool
bool Carriage::esPrimeraClase(){
    return this->primera_clase;
}

//Definimos el metodo venderAsiento
void Carriage::venderAsiento(){
    //Validamos que todavia haya asientos disponibles
    if(asientos_ocupados >= 40){
        cout<<"No puedes vender un asiento porque este vagon esta lleno"<<endl;
        return;
    }
    //En caso haya espacio vendemos un asiento y lo ocupamos
    this->asientos[asientos_ocupados] = true;
    asientos_ocupados++;
}

//Definimos el metodo ofrecerAsiento
void Carriage::ofrecerAsiento(){
    //Generamos un numero aleatorio del 1 al 100
    //Lo usaremos para decidir si esque compra o no 
    //El asiento
    int num = rand() % 100 + 1;
    //Validamos si el vagon es de primera clase o segunda
    if(primera_clase)
        //Si es de primera clase la probabilidad es del 10%
        //por lo tanto si el numero random esta entre el 1 y el 10 lo vendemos
        if(num <= 10) venderAsiento();
    else
        //Si es de segunda clase la probabilidad es del 40%
        //por lo tanto si el numero random esta entre el 1 y 40 lo vendemos
        if(num <= 40) venderAsiento();
}

//Definimos el metodo asientosOcupados devuelve un int
int Carriage::asientosOcupados(){
    return asientos_ocupados;
}
