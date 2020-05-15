#ifndef CARRIAGE_H
#define CARRIAGE_H

#include <string>

using namespace std;

class Carriage{
    private:
        bool asientos[40];
        bool primera_clase;
        int asientos_ocupados;
    public:
        Carriage();
        void setPrimeraClase(bool);
        bool esPrimeraClase();
        void venderAsiento();
        void ofrecerAsiento();
        int asientosOcupados();
};

#include "Carriage.cpp"
#endif