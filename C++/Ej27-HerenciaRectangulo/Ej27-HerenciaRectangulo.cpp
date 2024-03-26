/*Definir e implementar una clase Rectángulo con los siguientes
atributos y métodos:
Variables miembro privadas:
• largo y alto
• x e y (para la posición)
Métodos miembro públicos:
• Constructor que permita inicializar los valores de ancho y alto.
• Función que permita calcular el perímetro.
• Función que permita calcular el área.
• Función que permita calcular si otro rectángulo está adentro del rectángulo.
Utilizando herencia definir e implementar una clase Cuadrado. El constructor de dicha clase
debe tener solo un parámetro que indique el largo del lado. Crear un programa que utilice la
clase Cuadrado y pruebe todas las funcionalidades.*/

#include <math.h>
#include <stdlib.h>

using namespace std;
class rectangulo{
    private:
        float l, a, x, y;
    public:
        rectangulo(float,float,float,float);
        int perimetro();
        int area();
        void DentroDe(float v1, float v2, float v3, float v4);
};

class cuadrado:public rectangulo{
    private:
        float largo;
    public:
        cuadrado(float,float,float,float,float);
        int largolado();
};

rectangulo::rectangulo(float _l,float _a,float _x, float _y){
    l = _l;
    a = _a;
    x = _x;
    y = _y;
}
cuadrado::cuadrado(float _l,float _a,float _x, float _y, float _largo):rectangulo( _l, _a, _x, _y){
    largo = _largo;
}
int rectangulo::perimetro(){
    return(l*2+a*2);
}
void rectangulo::DentroDe(float v1, float v2, float v3, float v4){
    float P1,P2;
    P1 = 2*v1+2*v2;
    P2 = 2*v3+2*v4;
    if(P1 < P2){
        cout << "El rectangulo 1 esta dentro de el rectangulo 2"<<endl;
    }
    if(P1 > P2){
        cout << "El rectangulo 2 esta dentro del rectangulo 1"<<endl;
    }
    if(P1 == P2){
        cout << "Ambos son iguaes"<<endl;
    }
}
int rectangulo::area(){
    return(l*a);
}
int cuadrado::largolado(){
    
}

int main(){
    rectangulo uno(1,2,3,4);
    rectangulo dos(2,4,5,1);
    cout << "Perimetro 1" << uno.perimetro();
    cout << "perimetro 2" << dos.perimetro();

    cout << "Area 1" << uno.area();
    cout << "Area 2" << dos.area();

    

}
