#include <iostream>
using namespace std;
//prototipo
template<class Valores>
void mostrar(Valores n1, Valores n2);
int main(){
    int n1,n2;
    cout << "Ingrese un valor para N1:";
    cin >> n1;
    cout << "Ingrese un valor para N2:";
    cin >> n2;
    
    mostrar(n1,n2);

}
template<class Valores>
void mostrar(Valores n1, Valores n2){
    if(n1 > n2){
        cout << n1 << ":es mayor";
    }
    if(n1 < n2){
        cout << n2 << ":es mayor";
    }
}   