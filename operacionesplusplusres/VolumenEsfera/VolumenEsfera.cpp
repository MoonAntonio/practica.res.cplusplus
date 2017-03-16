// Practica para refrescar la sintaxis de C++

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Hallar el volumen de una esfera

    const float PI = 3.14159;
    float radio,volumen;

    cout<<"Ingrese el radio de la esfera : ";
    cin>>radio;
    volumen = 4/3*PI*pow(radio,3);
    cout<<"El volumen es "<<volumen<<endl;
    return 0;
}

