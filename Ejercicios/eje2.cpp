#include <iostream>
using namespace std;

int main()
{
    float numero;
    float suma = 0;

    do
    {
        cout<<"Numero:";
        cin>>numero;
        if(numero >= 0)
        {
            suma = suma + numero;
        }
    }while(numero >= 0);

    cout<<"Total "<<suma<<endl;

    return 0;
}
