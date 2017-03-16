#include <iostream>

using namespace std;

int main()
{
    /*SECUENCIAS DE ESCAPE
    \n -> salto de linea
    \b -> retroceso
    \n -> retorno hasta el inicio
    \t -> tabulador*/
    cout << "Hello" << "world!" << endl;
    cout << "Hello\n" << "world!" << endl;
    cout << "Hello\b" << "world!" << endl;
    cout << "Hello\n" << "world!" << endl;
    cout << "Hello\t" << "world!" << endl;
    return 0;
}
