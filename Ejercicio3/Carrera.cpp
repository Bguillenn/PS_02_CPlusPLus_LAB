//Incluimos la definicion de la clase y algunas
//librerias adicionales
#include "Carrera.h"
#include <iostream>
#include <string>

using namespace std;

//Definimos el constructor
Carrera::Carrera(double dis){
    //Validamos que no sea una distancia negativa
    if(dis < 0) dis = 0;
    //Asignamos los valores a los atributos
    this->distancia = dis;
    this->count_concursantes = 0;
}

//Definimos el metodo getGanador
Atleta Carrera::getGanador(){
    //Validamos si esque no hay concursantes y mostramos mensaje de error
    if(count_concursantes == 0){
        cout<<"ERROR: Aun no se registraron participantes en la carrera"<<endl;
        //Retornamos el objeto ganador que tiene valores UNDEFINED
        return this->ganador;
    }
    //Devolvemos el objeto ganador que tiene definidos datos
    return this->ganador;
}

//Definimos el metodo agregarConcursante
void Carrera::agregarConcursante(Atleta con){
    //Validamos si llegamos al limite de concursantes de la carrera
    if(count_concursantes == 20) {
        cout<<"No se puede añadir mas participantes se llego al limite"<<endl;
        return;
    }

    //En caso tengamos espacio añadimos al concursante
    this->concursantes[count_concursantes] = con;

    //Validamos si el nuevo concursante supero al actual ganador
    //Si es el primer concursante en añadirse se le define como ganador
    if(count_concursantes == 0) 
        ganador = con;
    else
        if(con.getTiempo() < ganador.getTiempo())
            ganador = con;
    
    //aumentamos el contador de concursantes
    this->count_concursantes++;
}

//Definimos el metodo cantidad concursantes
int Carrera::cantidadConcursantes(){
    //Devolvemos el atributo count_concursantes
    return count_concursantes;
}

//Definimos el metodo listarParticipantes
void Carrera::listarParticipantes(){
    //Validamos que existan participantes
    if(count_concursantes == 0) {
        cout<<"No hay concursantes en esta carrera"<<endl;
        return;
    }
    //Con un bucle recorremos toda la lista de participantes
    cout<<"===================[LISTA DE PARTICIPANTES]==================="<<endl;
    for(int i=0; i<count_concursantes;i++){
        cout<<"[Participante "<<i<<"]"<<endl;
        //llamamos a la funcion mostrar datos de la clase atleta
        this->concursantes[i].mostrarDatos();
    }
    cout<<"=================[FIN LISTA DE PARTICIPANTES]================="<<endl;
}

//Definimos el metodo
void Carrera::resumenCarrera(){
    //Mostramos los atributos de la carrera
    cout<<"===========[RESUMEN DE LA CARRERA]==========="<<endl;
    cout<<"[DISTANCIA]: "<<endl;
    cout<<"Distancia del recorrido: "<<distancia<<endl;
    cout<<"[GANADOR]:"<<endl;
    this->ganador.mostrarDatos();
    cout<<"[CANTIDAD DE PARTICIPANTES]"<<endl;
    cout<<"No. participantes: "<<this->count_concursantes<<endl;
    cout<<"=========[FIN RESUMEN DE LA CARRERA]========="<<endl;
}