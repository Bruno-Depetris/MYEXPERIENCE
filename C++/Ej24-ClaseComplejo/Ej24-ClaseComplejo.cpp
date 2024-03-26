/*Definir e implementar una clase Complejo para realizar aritmética con
números complejos de la forma p + i * q que posean los siguientes elementos públicos y
privados:
Variables miembro privadas:
• p y q - del tipo double, que representan la parte real e imaginaria del número.
Métodos miembro públicos:
• Constructor que permita inicializar los valores de la parte real y la imaginaria.
• Constructor que inicialice los valores por defecto.
• Suma de números complejos.
• Resta de números complejos.
• Impresión del número complejo en formato (p,q).
Crear un programa que utilice dicha clase y pruebe todas las funcionalidades.*/

#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Complejo{
    private:
        double p,q;
    public:
        Complejo(double,double);
        void Suma();
        void resta();

};

Complejo::Complejo(double negP, double negQ){
    q = negQ;
    p = negP;   
}


int main(){
    Complejo num(5, 20);
    num.Suma();
    num.resta();
}

void Complejo::Suma(){
    double _Suma;
    _Suma = p + q;
    cout << "La suma de esos valores es:"<<_Suma;
}

void Complejo::resta(){
    double _Resta;
    _Resta = p - q;
    cout << "La resta de esos valores es:"<<_Resta;
}
