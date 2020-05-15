#ifndef TANQUE_H
#define TANQUE_H

//Definimos la clase tanque
class Tanque{
    private:
        double contenido;
    public:
        static const int capacidad = 5000;
        Tanque();
        double getContenido() const;
        void agregar(double cantida); //No superar la capacidad
        void sacar(double cantidad); //No sacar mas de lo que hay
        void sacaMitad(); //Saca la mitad del contenido si no esta vacio
};

//Incluimos la implementacion de sus metodos
#include "Tanque.cpp"
#endif