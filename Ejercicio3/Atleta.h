//Definimos la clase atleta
#ifndef ATLETA_H
#define ATLETA_H
//Incluimos la libreria string ya que la utilizaremos
#include <string>
using namespace std;

class Atleta{
    private:
        string nombre; //Definimos el atributo nombre
        int numero; //Definimos el atributo numero
        string nacionalidad; //Definimos el atributo nacionalidad
        double tiempo; //Definimos el atributo tiempo
    public:
        Atleta(); //Definimos el constructor
        Atleta(string nom, int num, string nac, double tmp); //Definimos otro constructor
        string getNombre(); //Definimos un metodo getNombre
        int getNumero(); //Definimos un metodo getNumero
        string getNacionalidad(); //Definimos un metodo getNacionalidad
        double getTiempo(); //Definimos un metodo getTiempo
        void setNombre(string); //Definimos un metodo setNombre
        void setNumero(int); //Definimos un metodo setNumero
        void setNacionalidad(string); //Definimos un metodo setNacionalidad
        void setTiempo(double); //Definimos el metodo setTiempo
        void mostrarDatos(); //Definimos un metodo mostrarDatos
};
//Incluimos la implementacion de los metodos de la clase
#include "Atleta.cpp"
#endif