#include <iostream>
using namespace std;

int main(){
    /** PUNTEROS
        * -> declaracion de puntero
        & -> direcci�n de ...

        partes de la variable
            nombre y tipo
            contenido
            direcci�n de memoria
     **/
    int var = 100;
    int *puntero = &var;
    cout<<"Contenido de var "<<var<<endl;/** MUESTRO EL CONTENIDO DE LA VARIABLE **/
    cout<<"Direcci�n de var "<<&var<<endl;/** MUESTRO LA DIRECCI�N DE LA VARIABLE  **/
    cout<<endl;
    cout<<"Contenido del puntero "<<puntero<<endl;
    cout<<"Direccion del puntero "<<&puntero<<endl;
    return 0;
}
