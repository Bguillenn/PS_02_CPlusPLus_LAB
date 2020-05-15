//Incluimos la clase persona para
//Implementar sus metodos
#include "Persona.h"
#include <iostream>

using namespace std;

//IMPLEMENTAMOS EL METODO DORMIR
void Persona::dormir(){
    cout<<nombre<<" esta durmiendo ahora"<<endl;
}

//IMPLEMENTAMOS EL METODO HABLAR
void Persona::hablar(){
    cout<<nombre<<" esta hablando"<<endl;
}

//IMPLEMENTAMOS EL METODO CONTAR
void Persona::contar(){
    cout<<nombre<<" dice: '1,2,3,4,5,...'"<<endl;
}

//IMPLEMENTAMOS EL METODO ADQUIRIR NOMBRE
void Persona::adquirirNombre(){
    cout<<"Ingresa el nombre: "; cin>>this->nombre;
}

//IMPLEMENTAMOS EL METODO DECIR NOMBRE
void Persona::decirNombre(){
    cout<<"Mi nombre es "<<nombre<<endl;
}

