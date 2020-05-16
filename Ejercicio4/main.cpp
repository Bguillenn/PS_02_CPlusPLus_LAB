//Incluimos nuestras clases creadas y algunas librerias
#include "Train.h"
#include "Carriage.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    //Instanciamos 5 objetos de la clase Carriage
    Carriage v1,v2,v3,v4,v5;
    //Asignamos a dos de ellos ser de primera clase
    v1.setPrimeraClase(true);
    v2.setPrimeraClase(true);
    //Instanciamos un objeto de la clase Train y le definimos
    //sus valores
    Train t("Cerro Colorado", "Paucarpata", 35.5, 15.0);
    //Agregamos los objetos de la clase Carriage creados
    //anteriormente
    t.agregarVagon(v1);
    t.agregarVagon(v2);
    t.agregarVagon(v3);
    t.agregarVagon(v4);
    t.agregarVagon(v5);

    //Llamamos al metodo ofrecerAsientos para llenarlos aleatoriamente
    t.ocuparAsientos();
    //Mostramos el resumen del tren
    t.mostrarResumen();
    return 0;
}