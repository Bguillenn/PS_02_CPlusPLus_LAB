#ifndef PERSONA_H
#define PERSONA_H

//Definimos la clase persona con sus atributos y metodos
class Persona{
    private:
        char nombre[50];
    public:
        void dormir();
        void hablar();
        void contar();
        void adquirirNombre();
        void decirNombre();
};

//Incluimos la implementacion de sus metodos
#include "Persona.cpp"
#endif