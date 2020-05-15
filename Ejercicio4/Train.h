#ifndef TRAIN_H
#define TRAIN_H

#include "Carriage.h"
#include <string>

using namespace std;

class Train{
    private:
        Carriage vagones[10];
        string est_salida;
        string est_llegada;
        double prec_pclase;
        double prec_sclase;
        int cant_vagones;
    public:
        Train(string est_sal,string est_lleg ,double prec_pc,double prec_sc);
        void agregarVagon(Carriage);
        void definirEstacionSalida(string);
        void definirEstacionLlegada(string);
        void definirPrecioPrimeraClase(double);
        void definirPrecioSegundaClase(double);
        string getEstacionSalida();
        string getEstacionLlegada();
        double getPrecioPrimeraClase();
        double getPrecioSegundaClase();
        void ocuparAsientos();
        double totalGanancia();
        void mostrarResumen();
};

#include "Train.cpp"
#endif