// Practica para refrescar la sintaxis de C++

#include <iostream>
using namespace std;

int main()
{
    /* PRECEDENCIA ARITMETICA
    1. - Las operaciones entre parentesis
    2. - Multiplicacion, division y modulo
    3. - Suma y resta
    */

    cout<<14-8/2*3+1<<endl;// 3
    cout<<(14-8)/2*3+1<<endl;// 10
    cout<<14 - (8/2*3)+1<<endl;// 3
    cout<<14-8/2*(3+1)<<endl;// -2
    cout<<(14-8)/2*(3+1)<<endl;// 12

    cout<<"\n"<<endl;
    // ---------------------------------------------

    // DIVISION ENTERA Y DIVISION FLOAR/REAL

    cout<<7<<endl;
    cout<<7.0<<endl;
    cout<<"\n"<<endl;
    cout<<7/3<<endl;// Division int
    cout<<7.0/3<<endl;// Division float

    cout<<"\n"<<endl;
    // ---------------------------------------------

    /* OPERADORES MATEMATICOS
        Suma -> +
        Resta -> -
        Multiplicacion -> *
        Division -> /
        Modulo -> %
    */

    int numero1 = 7;
    int numero2 = 3;
    int cociente = numero1/numero2;
    int mod = numero1%numero2;

    cout<<cociente<<endl;
    cout<<mod<<endl;

    return 0;
}
