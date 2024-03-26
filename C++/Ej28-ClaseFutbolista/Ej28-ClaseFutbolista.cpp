/* Definir e implementar una clase Persona con las variables miembro
protegidas nombre y apellido del tipo cadena y un constructor que permita inicializar los
valores de nombre y apellido. Utilizando herencia definir e implementar una clase Futbolista.
Esta clase debe tener un nuevo atributo que indique el número de camiseta que utiliza dicho
jugador. Implementar un constructor que permita inicializar los valores de nombre, apellido y
número. También implementar un método miembro que permita imprimir los valores de estos
3 atributos.
Crear un programa que utilice la clase Futbolista y pruebe todas las funcionalidades. Definir e
implementar una clase Persona con las variables miembro protegidas nombre y apellido del
tipo cadena y un constructor que permita inicializar los valores de nombre y apellido.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class futbolista{
    private:
        string nombre, apellido;
    public:
    futbolista(string,string);
};
class tipo:futbolista{
    public:
        tipo(string,string);
        int numero;
};

futbolista::futbolista(string _nombre, string _apellido){
    nombre = _nombre;
    apellido = _apellido;
}

