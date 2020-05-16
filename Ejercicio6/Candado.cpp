//Incluimos la definicion de la clase
#include "Candado.h"
#include <iostream>
#include <string>

using namespace std;

//Implementamos el constructor que recibe tres enteros
//que son los digitos de la clave que solo se puede definir
//al crear una instancia
Candado::Candado(int clave_d1, int clave_d2, int clave_d3){
    //Validamos que no ingrese valores que no esten entre 0 y 9 en cada uno de los digitos
    if(clave_d1 > 9){ clave_d1 = 9; cout<<"ERROR: Digito 1 mayor a 9, se puso 9 por defecto"<<endl;}
    if(clave_d2 > 9){ clave_d2 = 9; cout<<"ERROR: Digito 2 mayor a 9, se puso 9 por defecto"<<endl;}
    if(clave_d3 > 9){ clave_d3 = 9; cout<<"ERROR: Digito 3 mayor a 9, se puso 9 por defecto"<<endl;}
    if(clave_d1 < 0){ clave_d1 = 0; cout<<"ERROR: Digito 1 menor a 0, se puso 0 por defecto"<<endl;}
    if(clave_d2 < 0){ clave_d2 = 0; cout<<"ERROR: Digito 2 menor a 0, se puso 0 por defecto"<<endl;}
    if(clave_d3 < 0){ clave_d3 = 0; cout<<"ERROR: Digito 3 menor a 0, se puso 0 por defecto"<<endl;}

    this->clave_dig[0] = clave_d1;
    this->clave_dig[1] = clave_d2;
    this->clave_dig[2] = clave_d3;
    //Inicializamos la combinacion actual en 0,0,0
    this->current_dig[0] = 0;
    this->current_dig[1] = 0;
    this->current_dig[2] = 0;
}

//Implementamos el metodo setDigito que mandamos una posicion
//y le mandamos el digito a actualizar
void Candado::setDigito(int pos, int dig){
    //Validamos que sea una posicion valida
    if(pos < 1 || pos > 3){
        cout<<"ERROR: La posicion para cambiar el digito debe estar entre 1 y 3"<<endl;
        return;
    }
    //Validamos que sea un digito valido
    if(dig < 0 || dig > 9){
        cout<<"ERROR:: El digito solo puede estar entre 0 y 9"<<endl;
        return;
    }
    //En caso todo este correcto cambiamos el digito en la pos
    this->current_dig[pos-1] = dig;
    cout<<"Combinacion cambiada con exito \n ACTUAL:";
    mostrarActualCombinacion();
}

//Implementamos el metodo puedeAbrir
bool Candado::puedeAbrir(){
    //Utilizamos un bucle validando que la combinacion
    //actual sea la misma que la clave en caso no sea verdad
    //retornamos falso
    for(int i = 0;i < 3 ; i++)
        if(current_dig[i] != clave_dig[i])
            return false;
    //Si no encontramos ninguna diferencia retornamos verdad
    return true;
}

//Implementamos el metodo obtenerDigito
int Candado::obtenerDigito(int pos){
    //Validamos que haya mandado una posicion valida
    if(pos < 1 || pos > 3){
        cout<<"ERROR: La posicion para cambiar el digito debe estar entre 1 y 3"<<endl;
        return -1;
    }

    return this->current_dig[pos-1];
}

//Implementamos el metodo mismaCombinacionActual
bool Candado::mismaCombinacionActual(Candado c){
    //Con un bucle recorremos ambos objetos
    //Validando si sus combinaciones actuales son las mismas
    for(int i = 0;i < 3 ; i++)
        if(current_dig[i] != c.obtenerDigito(i+1))
            return false;
    //Si no encontramos diferencias retornamos true
    return true;
}

//Immplementamos el metodo mostrarActualCombinacion
void Candado::mostrarActualCombinacion(){
    cout<<"["<<current_dig[0]<<"] ["<<current_dig[1]<<"] ["<<current_dig[2]<<"]"<<endl;
}