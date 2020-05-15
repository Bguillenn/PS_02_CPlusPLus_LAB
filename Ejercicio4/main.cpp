#include "Train.h"
#include "Carriage.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    Carriage v1,v2,v3,v4,v5;
    v1.setPrimeraClase(true);
    v2.setPrimeraClase(true);
    Train t("Cerro Colorado", "Paucarpata", 35.5, 15.0);
    t.agregarVagon(v1);
    t.agregarVagon(v2);
    t.agregarVagon(v3);
    t.agregarVagon(v4);
    t.agregarVagon(v5);

    t.ocuparAsientos();

    t.mostrarResumen();
    return 0;
}