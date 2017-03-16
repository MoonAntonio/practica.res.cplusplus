// Practica para refrescar la sintaxis de C++

#include <iostream>
using namespace std;

int main()
{

    // Cambia los grados de Celsius a Fahrenheit y a Kelvin

    float celsius,fahrenheit,kelvin;

    cout<<"Ingrese los grados celsius:";
    cin>>celsius;

    fahrenheit = ((celsius*9)/5)+32;
    kelvin = celsius + 273.15;

    cout<<"Los grados en kelvin es "<<kelvin<<endl;
    cout<<"Los grados en fahrenheit es "<<fahrenheit<<endl;


    return 0;
}
