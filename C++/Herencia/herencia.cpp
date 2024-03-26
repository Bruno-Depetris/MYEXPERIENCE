#include <iostream>
#include <stdlib.h>
using namespace std;

class persona{
    private:
        string nombre;
        int edad;
    public:
        persona(string,int);
        void mostrarpersona();
};
class alumno:public persona{
    private:
        string codigoalumno;
        float nota;
    public:
        alumno(string,int,string,float);
        void mostraralumno();
};
persona::persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}
alumno::alumno(string _nombre,int _edad,string _codigoalumno,float _nota):persona(_nombre, _edad){
    codigoalumno = _codigoalumno;
    nota = _nota;
}

void alumno::mostraralumno(){
    mostrarpersona();
    cout << "codigo alumno:" << codigoalumno << endl;
    cout << "nota:" << nota << endl; 
}
void persona::mostrarpersona(){
    cout << "nombre:" << nombre << endl;
    cout << "edad:" << edad << endl;
}

int main(){
    alumno alumno1("bruno",20,"55481",10);
    alumno1.mostraralumno();
}