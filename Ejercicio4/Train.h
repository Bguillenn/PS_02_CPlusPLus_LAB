//Definimos la clase Train
#ifndef TRAIN_H
#define TRAIN_H

//Incluimos la clase Carriage creada antes y la
//libreria string
#include "Carriage.h"
#include <string>

using namespace std;

class Train{
    private:
        Carriage vagones[10]; //Definimos un array de Vagones maximo 10 por tren
        string est_salida; //Definimos atributo estacion de salida
        string est_llegada; //Definimos atributo estacion de llegada
        double prec_pclase; //Definimos atributo precio primera clase
        double prec_sclase; //Definimos atributo precio segunda clase
        int cant_vagones; //Definimos atributo cantidad de vagones del tren (contador)
    public:
        Train(string est_sal,string est_lleg ,double prec_pc,double prec_sc); //Definimos el constructor
        void agregarVagon(Carriage); //Definimos el metodo agregarVagon
        void definirEstacionSalida(string); //Definimos el metodo definirEstacionSalida
        void definirEstacionLlegada(string); //Definimos el metodo definirEstacionLlegada
        void definirPrecioPrimeraClase(double); //Definimos el metodo definirPrecioPrimeraClase
        void definirPrecioSegundaClase(double); //Definimos el metodo definirPrecioSegundaClase
        string getEstacionSalida(); //Definimos el metodo getEstacionSalida
        string getEstacionLlegada(); //Definimos el metodo getEstacionLlegada
        double getPrecioPrimeraClase(); //Definimos el metodo getPrecioPrimeraClase
        double getPrecioSegundaClase(); //Definimos el metodo getPrecioSegundaClase
        void ocuparAsientos(); //Definimos el metodo ocuparAsientos
        double totalGanancia(); //Definimos el metodo totalGanancia
        void mostrarResumen(); //Definimos el metodo mostrarResumen
};
//Incluimos la impementacion de los metodos de la clase
#include "Train.cpp"
#endif