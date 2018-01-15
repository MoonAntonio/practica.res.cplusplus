#include <iostream>
using namespace std;

int main()
{
    int n;
    float suma = 0;

    cout << "Ingresa n:";
    cin >> n;

    for(float i = 2; i <= n ; i++)
    {
        suma = suma + 1.0/i;
    }

    cout<<"La suma total es "<<suma<<endl;

    return 0;
}
