/* Cree una clase Rectángulo con los atributos privados x, y, longitud y
ancho, cada uno con un valor predeterminado igual a 1. Agregar métodos públicos que
permitan:

• Calcular el área y el perímetro del rectángulo.
• Además, crear los métodos establecer (setear valores para x, y, l y a) y obtener (leer
valores x, y, l y a) para los atributos.
• Crear un método que permita saber si un rectángulo está adentro de otro.
• Crear un método que permita calcular el área de la intersección entre 2 rectángulos.*/
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
using std::cout;
using std::endl;

class Rectangulo{
    private:
        int x;
        int y;
        int l;
        int a;
    public:
        Rectangulo(int,int,int,int);

        bool estaDentroDe(Rectangulo);
        void areainterseccion();

        int get();
        int Area(), Perimetro();
};
Rectangulo::Rectangulo(int _x, int _y, int _l, int _a){
    x = _x;
    y = _y;
    l = _l; 
    a = _a;
}
int Rectangulo::get(){
    return x;
    return y;
    return l;
    return a;
}
int main (){
    Rectangulo uno(5,1,4,8);
    Rectangulo dos(2,4,6,4);

    uno.Area();
    uno.Perimetro();
    dos.Area();
    dos.Perimetro();
    
    cout << "-----Primer Rectangulo-----"<< endl << "Area:"<<uno.Area() << endl << "Perimetro:"<<uno.Perimetro() << endl << endl;
    cout << "-----Segundo Rectangulo----"<< endl << "Area:"<<dos.Area() << endl << "Perimetro:"<<dos.Perimetro() << endl;
    
    if (uno.estaDentroDe(dos)){ 
        if(uno.estaDentroDe(dos))
	{
		cout << "El rectangulo uno esta dentro del rectangulo dos\n";
	 } 
	else
	{
		cout << "El rectangulo uno no esta dentro del rectangulo dos\n";
	}
		if(dos.estaDentroDe(uno))
	{
		cout << "El rectangulo dos esta dentro del rectangulo uno\n";
	 } 
	else
	{
		cout << "El rectangulo dos no esta dentro del rectangulo uno\n";
	}

    }

}
int Rectangulo::Area(){
    return (l*a);
}

int Rectangulo::Perimetro(){
    return (2*a+2*l);
}

bool Rectangulo::estaDentroDe(Rectangulo rect)
{
	if(Area()>rect.Area())
	{
		return 0;
	}
	else
	{
		if (x < rect.x || y < rect.y || (x+l)>(rect.x+rect.l) || (y+a)>(rect.y+rect.a))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}