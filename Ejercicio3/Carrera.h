#ifndef CARRERA_H
#define CARRERA_H

#include "Atleta.h"

//Definimos la clase carrera y sus diferentes atributos y metodos
class Carrera{
    private:
        double distancia; // Distancia de la carrera
        Atleta ganador; // El atleta que va ganando
        Atleta concursantes[20]; //MAXIMO 20 por carrera
        int count_concursantes; //Contador de participantes
    public:
        Carrera(double dis); //Constructor que recibe la distancia
        Atleta getGanador(); //Devuelve al ganador
        void agregarConcursante(Atleta); //Agregra concursantes
        int cantidadConcursantes(); //Obtiene cantidad de concursantes
        void listarParticipantes(); //Lista los participantes
        void resumenCarrera(); //Muestra un resumen
};
//Incluimos la implementacion de los metodos
#include "Carrera.cpp"
#endif