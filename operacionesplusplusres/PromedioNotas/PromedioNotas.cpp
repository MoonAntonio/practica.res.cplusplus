// Practica para refrescar la sintaxis de C++

#include <iostream>
using namespace std;

int main()
{
    // Promedio de las notas

    float nota1,nota2,nota3,promedioFinal;

    cout<<"Nota 1:";
    cin>>nota1;

    cout<<"Nota 2:";
    cin>>nota2;

    cout<<"Nota 3:";
    cin>>nota3;

    promedioFinal = (nota1+nota2+nota3)/3;
    cout<<"Promedio final :"<<promedioFinal<<endl;

    return 0;
}
