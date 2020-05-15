#include "Candado.h"

#include <iostream>
#include <string>

using namespace std;

Candado::Candado(int clave_d1, int clave_d2, int clave_d3){
    if(clave_d1 > 9){ clave_d1 = 9; cout<<"ERROR: Digito 1 mayor a 9, se puso 9 por defecto"<<endl;}
    if(clave_d2 > 9){ clave_d2 = 9; cout<<"ERROR: Digito 2 mayor a 9, se puso 9 por defecto"<<endl;}
    if(clave_d3 > 9){ clave_d3 = 9; cout<<"ERROR: Digito 3 mayor a 9, se puso 9 por defecto"<<endl;}
    if(clave_d1 < 0){ clave_d1 = 0; cout<<"ERROR: Digito 1 menor a 0, se puso 0 por defecto"<<endl;}
    if(clave_d2 < 0){ clave_d2 = 0; cout<<"ERROR: Digito 2 menor a 0, se puso 0 por defecto"<<endl;}
    if(clave_d3 < 0){ clave_d3 = 0; cout<<"ERROR: Digito 3 menor a 0, se puso 0 por defecto"<<endl;}

    this->clave_dig[0] = clave_d1;
    this->clave_dig[1] = clave_d2;
    this->clave_dig[2] = clave_d3;

    this->current_dig[0] = 0;
    this->current_dig[1] = 0;
    this->current_dig[2] = 0;
}

void Candado::setDigito(int pos, int dig){
    if(pos < 1 || pos > 3){
        cout<<"ERROR: La posicion para cambiar el digito debe estar entre 1 y 3"<<endl;
        return;
    }
    if(dig < 0 || dig > 9){
        cout<<"ERROR:: El digito solo puede estar entre 0 y 9"<<endl;
        return;
    }

    this->current_dig[pos-1] = dig;
    mostrarActualCombinacion();
}

bool Candado::puedeAbrir(){
    for(int i = 0;i < 3 ; i++)
        if(current_dig[i] != clave_dig[i])
            return false;

    return true;
}

int Candado::obtenerDigito(int pos){
    if(pos < 1 || pos > 3){
        cout<<"ERROR: La posicion para cambiar el digito debe estar entre 1 y 3"<<endl;
        return -1;
    }

    return this->current_dig[pos-1];
}

bool Candado::mismaCombinacionActual(Candado c){
    for(int i = 0;i < 3 ; i++)
        if(current_dig[i] != c.obtenerDigito(i+1))
            return false;

    return true;
}

void Candado::mostrarActualCombinacion(){
    cout<<"["<<current_dig[0]<<"] ["<<current_dig[1]<<"] ["<<current_dig[2]<<"]"<<endl;
}