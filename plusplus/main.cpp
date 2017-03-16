
// Practica para refrescar la sintaxis de C++


#include <iostream>

using namespace std;

int main()
{
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
