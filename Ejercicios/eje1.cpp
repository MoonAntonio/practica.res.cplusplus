#include <iostream>
using namespace std;

int main()
{
    int numeros = 1234;
    int contador = 0;

    cout<<"Ingresa los numeros"<<endl;
    cin>>numeros;

    do
    {
        numeros = numeros/10;
        contador++;
    } while(numeros != 0);

    cout<<"La cantidad de numeros es "<<contador<<endl;

    return 0;
}
