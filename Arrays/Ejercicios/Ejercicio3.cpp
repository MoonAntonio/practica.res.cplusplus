#include <iostream>
using namespace std;

int main(){
    /**Lea su nombre en min�scula y muestre por
    consola su nombre escrito en may�scula. Use la funci�n toupper.
    **/
    char nombre[30],c;
    int i=0;
    cout<<"Ingresa tu nombre:";
    cin.getline(nombre,30);

    while(nombre[i]){
        c = toupper(nombre[i]);
        i++;
        cout<<c;
    }

    return 0;
}
