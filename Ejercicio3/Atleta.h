#ifndef ATLETA_H
#define ATLETA_H

#include <string>
using namespace std;
class Atleta{
    private:
        string nombre;
        int numero;
        string nacionalidad;
        double tiempo;
    public:
        Atleta();
        Atleta(string nom, int num, string nac, double tmp);
        string getNombre();
        int getNumero();
        string getNacionalidad();
        double getTiempo();
        void setNombre(string);
        void setNumero(int);
        void setNacionalidad(string);
        void setTiempo(double);
        void mostrarDatos();
};
#include "Atleta.cpp"
#endif