//Definimos nuestra clase candado
#ifndef CANDADO_H
#define CANDADO_H

class Candado{
    private:
        int clave_dig[3]; //Almacena en un array la clave
        int current_dig[3]; //Almacena en otro array la combinacion actual
    public:
        Candado(int clave_d1, int clave_d2, int clave_d3); //Definimos el constructor
        void setDigito(int pos, int dig); //Definimos el metodo setDigito
        bool puedeAbrir(); //Definimos el metodo puedeAbrir
        bool mismaCombinacionActual(Candado); //Definimos el metodo mismaCombinacionActual
        int obtenerDigito(int pos); //Definimos el metodo obtenerDigito
        void mostrarActualCombinacion(); //Definimos el metodoMostrarActualCombinacion
};
//Incluimos la implementacion de los metodos
#include "Candado.cpp"
#endif