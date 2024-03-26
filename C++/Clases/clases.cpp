#include<iostream>
#include<stdlib.h>
using namespace std;    

class persona{
    private: //atributos
        int edad;
        string nombre; 

    public: //metodo
        persona(int,string);
        void leer();
        void correr();
};
//constructor, sirve para inicializar tributos de la clase
persona::persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;

}

void persona::leer(){
    cout << "soy "<<nombre<<"y estoy leyendo";

}

void persona::correr(){
    cout << "soy "<<nombre<<"y estoy corriendo";
}

int main (){
    persona p1(20,"bruno");

    p1.leer();
    p1.correr();
    
}