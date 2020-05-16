//Definimos nuestra clase Sala
#ifndef SALA_H
#define SALA_H

//Incluimos la libreria string
#include <string>

using namespace std;

class Sala{
    private:
        string nombre; //Definimos un atributo nombre
        double ancho; //Definimos un atributo ancho
        double largo; //Definimos un atributo largo
        bool equipado; //Definimos un atributo equipado
    public:
        Sala(string nom, double an, double lg, bool equip); //Definimos el constructor
        int obtenerCapacidad(); //Definimos el metodo obtenerCapacidad
        double obtenerMetrosCuadrados(); //Definims el metodo obtenerMetrosCuadrados
        double obtenerPrecio(); //Definimos el metodo obtenerPrecio
        void mostrarInfo(); //Definimos el metodo mostrarInfo
};
//Incluimos la implementacion de los metodos
#include "Sala.cpp"
#endif
