#include<iostream>
using namespace std;
 
int main()
{
    int radio;
    float area, perimetro;
 //lo que estoy haciendo
    // SALIDA: mensaje un pantalla
    cout << "Introduce el radio del circulo: ";
 
    //ENTRADA: recibir dato desde teclado
    cin >> radio;
 
    // calculos
    area = 3.1416 * radio * radio;
    perimetro = 3.1416 * radio * 2;
 
    //SALIDA: resultado en pantalla
    cout << "El area es " << area << " y el perimetro " << perimetro;
    cin.get();cin.get();
 
    return 0;
}
