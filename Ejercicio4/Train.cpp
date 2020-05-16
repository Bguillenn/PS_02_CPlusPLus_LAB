//Incluimos la definicion de la clase y tambien la clase
//Carriage junto con algunas librerias
#include "Train.h"
#include "Carriage.h"
#include <iostream>
#include <string>

using namespace std;

//Definimos el constructor de la clase
Train::Train(string est_sal, string est_lleg, double prec_pc, double prec_sc){
    this->est_llegada = est_lleg;
    this->est_salida = est_sal;
    this->prec_pclase = prec_pc;
    this->prec_sclase = prec_sc;
    this->cant_vagones = 0; //Inicializa el contador en 0 vagones
}

//Definimos el metodo agregarVagon recibe un objeto
//Tipo Carriage
void Train::agregarVagon(Carriage vagon){
    //Validamos que no hayamos llegado al limite de vagones
    if(cant_vagones == 10) {
        cout<<"No puedes añadir mas vagones"<<endl;
        return;
    }
    //Si todavia podemos añadir lo añadimos
    this->vagones[cant_vagones] = vagon;
    cant_vagones++; //Aumentamos el contador de vagones
}

//Definimos el metodo definirEstacionSalida recibe un string
void Train::definirEstacionSalida(string sal){
    this->est_salida = sal;
}

//Definimos el metodo definirEstacionLlegada recibe un string
void Train::definirEstacionLlegada(string lleg){
    this->est_llegada = lleg;
}

//Definimos el metodo definirPrecioPrimeraClase recibe un double
void Train::definirPrecioPrimeraClase(double prec){
    //Validamos que el parametro mandado no sea menor a 0
    //De ser asi lo establecemos en 0
    if(prec < 0) this->prec_pclase = 0;
    else this->prec_pclase = prec;
}

//Definimos el metodo definirPrecioSegundaClase recibe un double
void Train::definirPrecioSegundaClase(double prec){
    //Validamos que el parametro mandado no sea menor a 0
    //De ser asi lo establecemos en 0
    if(prec < 0) this->prec_sclase = 0;
    else this->prec_sclase = prec;
}

//Definimos el metodo getEstacionSalida devuelve un string
string Train::getEstacionSalida(){
    return this->est_salida;
}

//Definimos el metodo getEstacionLlegada devuelve un string
string Train::getEstacionLlegada(){
    return this->est_llegada;
}

//Definimos el metodo getPrecioPrimeraClase devuelve un double
double Train::getPrecioPrimeraClase(){
    return this->prec_pclase;
}

//Definimos el metodo getPrecioSegundaClase devuelve un double
double Train::getPrecioSegundaClase(){
    return this->prec_sclase;
}

//Definimos un metodo ocuparAsientos
//Llena aleatoriamente cada uno de los cagones del tren
void Train::ocuparAsientos(){
    //Creamos un numero random que sera las ofertas de tickets
    //por cada vagon del tren esta en el rango de 50 - 250
    int num_ofertas_por_vagon = rand() % 200 + 50;

    //Con un bucle recorremos la cantidad de vagones que tiene el tren
    for(int i = 0; i < cant_vagones; i++)
        //Mediante otro bucle llamaremos las veces que determine el numero
        //random el metodo de ofrecerAsiento que definimos en la clase Carriage
        for(int j=0; j < num_ofertas_por_vagon; j++)
            this->vagones[i].ofrecerAsiento();

}

//Definimos el metodo totalGanancia devuelve un double
double Train::totalGanancia(){
    //Creamos una variable que nos ira almacenando la ganancia
    double ganancia = 0;
    //Con un bucle recorremos cada uno de los vagones del tren
    for(int i = 0 ; i < cant_vagones ; i++)
        //Validamos si el vagon i es de primera clase o de sgeunda
        if(vagones[i].esPrimeraClase())
            //Si es de primera clase multiplicamos los asientos ocupados
            //por el precio de primera clase y lo añadimos a ganancia
            ganancia += (vagones[i].asientosOcupados() * prec_pclase);
        else
            //Si es de segunda clase multiplicamos los asientos ocupados
            //por el precio de segunda clase y lo añadimos a ganancia
            ganancia += (vagones[i].asientosOcupados() * prec_sclase);
    //Retornamos ganancia
    return ganancia;
}

//Definimos el metodo mostrar resumen que imprime datos del tren
void Train::mostrarResumen(){
    cout<<"===============[INFORME DEL TREN]==============="<<endl;
    cout<<"Estacion de salida: "<<est_salida<<endl;
    cout<<"Estacion de llegada: "<<est_llegada<<endl;
    cout<<"Precio primera clase: "<<prec_pclase<<endl;
    cout<<"Precio segunda clase: "<<prec_sclase<<endl;
    cout<<"Cantidad de vagones: "<<cant_vagones<<endl;
    cout<<"Ganancias del tren: "<<totalGanancia()<<endl;
    cout<<"=============[FIN INFORME DEL TREN]============="<<endl;
}