
// Practica para refrescar la sintaxis de C++


#include <iostream>

using namespace std;

int main()
{
    // NOTACION CIENTIFICA
    int valor1 = 3e3;//3*10^3
    double valor2 = 5.3e3;//5.3*10^3
    double valor3 = 1.222e-3;//1.222*10^3
    cout<<valor1<<endl;
    cout<<valor2<<endl;
    cout<<valor3<<endl;

    cout<<"\n"<<endl;
    // ---------------------------------------------

    // ASIGNACION DE VARIABLES
    int edad = 30,edadTotal;
    char nombre = 'Moon';
    float estatura = 3.10;
    double estPrecisa = 3.12331;
    bool esperando = false;

    edadTotal = 25;
    cout << "Nombre: " << nombre << endl;


    cout<<"\n"<<endl;
    // ---------------------------------------------

    /* TIPOS DE VARIABLES
    int -> Integer -> Enteros
    char -> Character -> Caracter
    float -> Decimales redondeados -> Reales
    double -> Decimales reales -> Reales Precisos
    bool -> Boolean -> logicos
    */

    // DECLARACION DE VARIABLES
    int var,varx;
    char var2;
    float var3;
    double varDoble;
    bool varBool;

    // ---------------------------------------------

    /* MENSAJE POR CONSOLA
    cout << "Hello world!" << endl;
    */
    cout << "Mensaje por consola!\n" << endl;

    // ---------------------------------------------

    /*SECUENCIAS DE ESCAPE
    \n -> salto de linea
    \b -> retroceso (No elimina, solo retrocede)
    \r -> intercambia la primera y la segunda
    \t -> tabulador
    */
    cout << "Hello" << "world!\n" << endl;
    cout << "Hello\n" << "world!\n" << endl;
    cout << "Hello\b" << "world!\n" << endl;
    cout << "Hello\r" << "world!\n" << endl;
    cout << "Hello\t" << "world!\n" << endl;
    return 0;
}
