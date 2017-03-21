// Practica para refrescar la sintaxis de C++

#include <iostream>
using namespace std;

int main()
{
    // RELOJ

    int contador = 0;
    int acumulador = 0;

    while(contador<=10)
    {
        cout<<contador<<endl;
        contador++;
        acumulador = acumulador + contador;
    }

    cout<<"Contador "<<contador<<endl;
    cout<<"El valor total es "<<acumulador<<endl;

    return 0;
}
