#include <iostream>
using namespace std;
/** PROTOTIPO **/
void mensaje();
int suma(int a,int b);
bool esPar(int);

int main(){
    /** Funciones y procedimientos**/

    if(esPar(8)){
        cout<<"El numero es par"<<endl;
    }
    else{
        cout<<"No es par"<<endl;
    }
    return 0;
}

void mensaje(){
    cout<<"Mensaje dentro de un procedimiento"<<endl;
}

int suma(int a,int b){
    int c = a+b;
    return c;
}

bool esPar(int a){
    if(a%2==0){
        return true;
    }
    else{
        return false;
    }
}
