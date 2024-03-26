/*Supongamos que tenemos un sensor que mide aceleración y velocidad.  

La aceleración que mide el sensor es siempre positiva y se encuentra codificada  
como un entero entre 0 y 2¹⁰-1 (1023). Un 0 indica que no hay aceleración y un   
1023 indica el máximo de aceleración soportado por el sensor que es de 5g,          
donde g es la aceleración de la gravedad. 

La velocidad que mide el sensor es siempre positiva y se encuentra codificada       
como un entero entre 0 y 2¹²-1. Un 0 indica que no hay velocidad y el valor         
máximo que puede medir es de 1000m/s.  

    a) Crear una clase para almacenar ambos enteros.                             
    b) Crear un método que imprima el valor de la aceleración en g.              
    c) Crear un método que devuelva el valor de la velocidad en m/s.             
    d) Crear un programa que use la clase y sus métodos creados en los puntos b  
    y c.                                                                         
  Herencia:                                                                      
    e) Usando herencia para definir una nueva clase que agregue un atributo a la 
    clase para almacenar la medición del campo magnético, dicha medición es      
    siempre positiva y se encuentra codificada como un valor entre 0 y 511.      
    Un 0 representa 0uT (micro Tesla) y un 511 representa 4800uT.                
    f) Crear un método que imprima el valor del campo magnético en uT.           
    g) Crear un programa que use el método creado en f.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class enteros{//clase
    private:
        float aceleracion, velocidad;
    public:
        enteros(float,float);
        void Aceleracion_G();
        float Velocidad_ms();
};

class Magnetic:enteros{
    private:
        float magne;
    public:
        Magnetic(float _a, float _v, float _m);
        float calculo();
};

enteros::enteros(float _a, float _v){
    aceleracion = _a;
    velocidad = _v;
    
}
Magnetic::Magnetic(float _a, float _v, float _m):enteros( _a, _v){
    magne = _m;
}
float Magnetic::calculo(){
    float M;
    M = ((4800 * magne)/511);
    cout << "---Magnetismo---" << endl;
    cout << "ut:"<< M <<endl;
    Aceleracion_G();
    Velocidad_ms();
}
void enteros::Aceleracion_G(){
    float A;
    A = ((5*aceleracion)/1023);
    cout << "---Aceleracion---" << endl;
    cout << "G:"<< A <<endl;
}
float enteros::Velocidad_ms(){
    float V;
    V=((1000*velocidad)/4095);
    cout << "---Velocidad---" << endl;
    cout << "m/s:"<< V <<endl;
}
int main(){
    Magnetic datos(244.3 ,900.5, 280.2);
    datos.calculo();
}