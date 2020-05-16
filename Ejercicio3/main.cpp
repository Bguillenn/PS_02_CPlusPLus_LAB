#include "Carrera.h"
#include "Atleta.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    //Instanciamos 5 objetos de clase Atleta
    Atleta c1,c2,c3,c4,c5;

    //Les definimos un nombre mediante el metodo
    //setNombre
    c1.setNombre("Brayan");
    c2.setNombre("Analu");
    c3.setNombre("Denis");
    c4.setNombre("Irely");
    c5.setNombre("Jordan");

    //Les definimos una nacionalidad mediante el metodo
    //setNacionalidad
    c1.setNacionalidad("Peru");
    c2.setNacionalidad("Arequipa");
    c3.setNacionalidad("Bolivia");
    c4.setNacionalidad("Peru");
    c5.setNacionalidad("Japon");

    //Les definimos un numero mediante el metodo
    //setNumero
    c1.setNumero(11);
    c2.setNumero(13);
    c3.setNumero(10);
    c4.setNumero(1);
    c5.setNumero(18);

    //Les definimos un tiempo mediante el metodo
    //setTiempo
    c1.setTiempo(20.0);
    c2.setTiempo(19.0);
    c3.setTiempo(21.0);
    c4.setTiempo(18.0);
    c5.setTiempo(25.0);

    //Instanciamos un objeto de la clase Carrera
    Carrera car(250.0);

    //Añadimos las isntancias de atletas que creamos anteriormente
    car.agregarConcursante(c1);
    car.agregarConcursante(c2);
    car.agregarConcursante(c3);
    car.agregarConcursante(c4);
    car.agregarConcursante(c5);

    //Mostramos un resumen de la carrera con los participantes añadidos
    car.resumenCarrera();

    return 0;
}