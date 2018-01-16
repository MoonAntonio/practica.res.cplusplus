#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /***** ESTADO DEl ARCHIVO *****/
    /**
        bad()  -> Cuando no tenemos permiso. Cuando no hay espacio. Cuando no existe el archivo
        fail() -> Error de formato (tratas de leer int y solo encuentras un char).
        eof()  -> Fin de archivo End Of File
        good() ->
     **/
    ifstream entrada;
    char linea[80];
    entrada.open("archivo.txt");
    if(entrada.good()){
        entrada.getline(linea,80);
        cout<<linea<<endl;
    }
    else{
        cout<<"Archivo en mal estado"<<endl;
    }
    return 0;
}
