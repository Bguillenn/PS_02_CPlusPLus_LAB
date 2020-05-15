//ARCHIVO MAIN DONDE INSTANCIAREMOS
//LA CLASE
#include <iostream>
//Importamos la clase creada (CABEZERA)
#include "persona.h"

//Metodo main
int main(){
    //Crearemos 3 instancias de PERSONA
    //y llamaremos a su metodo para 
    //ponerles nombre
    Persona p1,p2,p3;
    p1.adquirirNombre();
    p2.adquirirNombre();
    p3.adquirirNombre();

    //Ahora utilizaremos para cada instancias
    //Todos los metodos creados anteriormente
    p1.decirNombre();
    p2.decirNombre();
    p3.decirNombre();

    p1.dormir();
    p2.dormir();
    p3.dormir();

    p1.hablar();
    p2.hablar();
    p3.hablar();

    p1.contar();
    p2.contar();
    p3.contar();

    //Terminamos la ejecución del programa
    return 0;
}