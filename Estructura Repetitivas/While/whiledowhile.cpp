// Practica para refrescar la sintaxis de C++

#include <iostream>

using namespace std;

int main()
{
    /* ESTRUCTURAS REPETITIVAS
        1. - While -> Mientras
        2. - Do While -> Hacer mientras
    */

    int numero = 5;

    while(numero == 5)
    {
        cout<<"Ciclo While"<<endl;
    }

    do
    {
        cout<<"Ciclo Do While"<<endl;
    }while(numero==5);

    return 0;
}

