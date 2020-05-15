#ifndef SALA_H
#define SALA_H

#include <string>

using namespace std;

class Sala{
    private:
        string nombre;
        double ancho;
        double largo;
        bool equipado;
    public:
        Sala(string nom, double an, double lg, bool equip);
        int obtenerCapacidad();
        double obtenerMetrosCuadrados();
        double obtenerPrecio();
        void mostrarInfo();
};

#include "Sala.cpp"
#endif
