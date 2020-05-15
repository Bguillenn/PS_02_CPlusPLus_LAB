#include "Train.h"
#include "Carriage.h"
#include <iostream>
#include <string>

using namespace std;

Train::Train(string est_sal, string est_lleg, double prec_pc, double prec_sc){
    this->est_llegada = est_lleg;
    this->est_salida = est_sal;
    this->prec_pclase = prec_pc;
    this->prec_sclase = prec_sc;
    this->cant_vagones = 0;
}

void Train::agregarVagon(Carriage vagon){
    if(cant_vagones == 10) {
        cout<<"No puedes añadir mas vagones"<<endl;
        return;
    }

    this->vagones[cant_vagones] = vagon;
    cant_vagones++;
}

void Train::definirEstacionSalida(string sal){
    this->est_salida = sal;
}

void Train::definirEstacionLlegada(string lleg){
    this->est_llegada = lleg;
}

void Train::definirPrecioPrimeraClase(double prec){
    if(prec < 0) this->prec_pclase = 0;
    else this->prec_pclase = prec;
}

void Train::definirPrecioSegundaClase(double prec){
    if(prec < 0) this->prec_sclase = 0;
    else this->prec_sclase = prec;
}

string Train::getEstacionSalida(){
    return this->est_salida;
}

string Train::getEstacionLlegada(){
    return this->est_llegada;
}

double Train::getPrecioPrimeraClase(){
    return this->prec_pclase;
}

double Train::getPrecioSegundaClase(){
    return this->prec_sclase;
}

void Train::ocuparAsientos(){

    int num_ofertas_por_vagon = rand() % 200;

    for(int i = 0; i < cant_vagones; i++)
        for(int j=0; j < num_ofertas_por_vagon; j++)
            this->vagones[i].ofrecerAsiento();

}

double Train::totalGanancia(){
    double ganancia = 0;
    for(int i = 0 ; i < cant_vagones ; i++)
        if(vagones[i].esPrimeraClase())
            ganancia += (vagones[i].asientosOcupados() * prec_pclase);
        else
            ganancia += (vagones[i].asientosOcupados() * prec_sclase);
        
    return ganancia;
}

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