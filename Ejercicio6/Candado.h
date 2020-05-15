#ifndef CANDADO_H
#define CANDADO_H

class Candado{
    private:
        int clave_dig[3];
        int current_dig[3];
    public:
        Candado(int clave_d1, int clave_d2, int clave_d3);
        void setDigito(int pos, int dig);
        bool puedeAbrir();
        bool mismaCombinacionActual(Candado);
        int obtenerDigito(int pos);
        void mostrarActualCombinacion();
};
#include "Candado.cpp"
#endif