//Definimos la clase Carriage
#ifndef CARRIAGE_H
#define CARRIAGE_H
//Incluimos la libreria string
#include <string>

using namespace std;

class Carriage{
    private:
        bool asientos[40]; //Creamos un array de asientos tipo bool maximo 40
        bool primera_clase; //Creamos un atributo tipo bool primera_clase
        int asientos_ocupados; //Creamos un atributo int que sirve de contador
    public:
        Carriage(); //Definimos el constructor
        void setPrimeraClase(bool); //Definimos un metodo setPrimeraClase
        bool esPrimeraClase(); //Definimos un metodo esPrimeraClase
        void venderAsiento(); //Definimos un metodo de vender asiento
        void ofrecerAsiento(); //Definimos un metodo ofrecer asiento
        int asientosOcupados(); //Definimos un metodo asientosOcupados
};
//Incluimos la implementacion de los metodos de la clase
#include "Carriage.cpp"
#endif