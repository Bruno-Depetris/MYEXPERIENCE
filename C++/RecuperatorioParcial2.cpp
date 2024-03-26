/*Supongamos que tenemos un sensor de aceleración ADXL335 que mide
aceleración en 3 ejes (X, Y y Z).
El sensor nos entrega una salida analógica que va de 0V a 3.3V y tiene
un rango de trabajo de +-3g en cada eje, donde g es la aceleración de la
gravedad. 

Una salida de 0V en un eje indica -3g, una salida de 1.65V
indica 0g y una salida de 3.3V indica una aceleración de 3g.

     a) Crear una clase para almacenar las 3 salidas crudas del sensor
(voltaje) y la conversión a g.

     b) Agregar a la clase un constructor que reciba los 3 valores de
voltaje y que en base a ellos calcule los valores en g. Almacenar los 6
valores en los atributos de la clase.

     c) Crear un método que reciba los datos crudos de aceleración y que
guarde en la clase los valores de la aceleración en g.

     d) Crear un método que imprima de manera ordenada los valores de
aceleración.

     e) Crear un programa que cree un objeto y que use los métodos
definidos anteriormente.

     f) Usando herencia, definir una nueva clase que agregue el atributo
número de medición a la clase ya definida.

     g) Crear un constructor similar al del punto c), pero que agregue
la inicialización del número de medición.

     h) Agregar al programa del punto e) la creación de un objeto de la
clase definida en el punto f). Usar el constructor definido en g).*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Salidas{                          //primer clase
    private:
        float x,y,z;
        float xG,yG,zG;
    public:
        Salidas(float,float,float);
        void convercion();
        void imprimir(float,float,float);
        float axG,ayG,azG;
};
class NumDeMed:Salidas{                 //Segunda clase que hereda valores de la primera
    private:
        float NumeroMedicion;
    public:
        NumDeMed(float,float,float,float);
};


Salidas::Salidas(float _x,float _y,float _z){                               //contructor
    x = _x;
    y = _y;
    z = _z;

    xG = (x/1.65*(3/1.8));
    yG = (y/1.65*(3/1.8));
    zG = (z/1.65*(3/1.8));
    convercion();
}
NumDeMed::NumDeMed(float _x,float _y,float _z, float M):Salidas(_x,_y,_z){      //contructor con herencia
    NumeroMedicion = M;
}
void Salidas::convercion(){
    float xC,yC,zC;
    xC = (x*(3/1.65)-3);
    yC = (y*(3/1.65)-3);
    zC = (z*(3/1.65)-3);
    axG = xC * 9.81;
    ayG = yC * 9.81;
    azG = zC * 9.81;
    imprimir(xC,yC,zC); 
}
void Salidas::imprimir(float q,float w,float r){
    cout << "----Valores en V-----" << endl;
    cout << "X:" << x << endl;
    cout << "Y:" << y << endl;
    cout << "Z:" << z << endl;

    cout << "----Valores en G-----" << endl;
    cout << "X:" << xG << endl;
    cout << "Y:" << yG << endl;
    cout << "Z:" << zG << endl;

    cout << "----Valores Crudos de aceleracion-----" << endl;
    cout << "X:" << q << endl;
    cout << "Y:" << w << endl;
    cout << "Z:" << r << endl;

}
int main(){
    Salidas S(1.65,0.0,3.3);        //Objeto clases Salidas
    NumDeMed N(1.65,0.0,3.3,1.8);  //1.8 Numero agregado para formal el objeto

}