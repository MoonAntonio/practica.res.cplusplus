
// Practica para refrescar la sintaxis de C++


#include <iostream>

using namespace std;

int main()
{


    /* MENSAJE POR CONSOLA
    cout << "Hello world!" << endl;
    */
    cout << "Hello world!" << endl;


    /*SECUENCIAS DE ESCAPE
    \n -> salto de linea
    \b -> retroceso (No elimina, solo retrocede)
    \r -> intercambia la primera y la segunda
    \t -> tabulador
    */
    cout << "Hello" << "world!" << endl;
    cout << "Hello\n" << "world!" << endl;
    cout << "Hello\b" << "world!" << endl;
    cout << "Hello\r" << "world!" << endl;
    cout << "Hello\t" << "world!" << endl;
    return 0;
}
