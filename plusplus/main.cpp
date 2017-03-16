// Practica para refrescar la sintaxis de C++

#include <iostream>
using namespace std;

int main()
{
    /*ENTRADA POR CONSOLA
    CIN -> Console INput
    */
    int valNumero;
    cout<<"Ingrese un numero: ";
    cin>>valNumero;
    cout<<"El valor ingresado es "<<valNumero<<endl;


    cout<<"\n"<<endl;
    // ---------------------------------------------

    /*TIPO              BOOL             FLOAT          DOUBLE
        Bytes =        1 byte           4 bytes         8 bytes
        Rango =           -      1.17e-38 a 3.40e38   2.22e-308 a 1.80e308
    */

    cout<<"  Bool: "<<sizeof(bool)<<endl;
    cout<<" Float: "<<sizeof(float)<<endl;
    cout<<"Double: "<<sizeof(double)<<endl;


    cout<<"\n"<<endl;
    // ---------------------------------------------

    /*TIPO INT
        Tamaño en bytes = 4(varia)
        Nº de valores = 2^32 = 4,294,967,296
        Rango = de -2,147,483,648 a 2,147,483,647
        32 bits
        1 bit -> signo
        31 bits -> valores que puede tomar -> 2^31 -> 2,147,483,648
        32 bits -> 2^32 = 4,294,967,296

        unsigned -> sin signo
        unsigned int -> 32 bits para los valores
        2^32 = 4,294,967,296
        Rango -> 0 hasta 4,294,967,295
    */

    int numero = -1;
    unsigned int numero2 = -1;

    cout<<numero<<endl;
    cout<<numero2<<endl;
    //cout<<sizeof(int)<<endl; sizeof devuelve el tamaño en bytes del int en memoria


    cout<<"\n"<<endl;
    // ---------------------------------------------

    /*TIPO CHAR
        Tamaño en bytes = 1
        Nº de valores = 256
        Rango = de -128 a 127
    */
    char letra = 65;// Codigo ASCII
    cout<<letra<<endl;


    cout<<"\n"<<endl;
    // ---------------------------------------------

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

    // Fin
    return 0;
}
