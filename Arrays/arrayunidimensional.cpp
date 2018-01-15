#include <iostream>

using namespace std;

int main()
{
    int array1[10];
    int array2[] = {1,2,3,4,5};

    for(int i=0;i<10;i++)
    {
        cout<<"Indice "<<i<<endl;
        cin>>array1[i];
    }

    for(int i=0;i<10;i++)
    {
        cout<<array1[i]<<":";
    }

    /**cout<<array2[0]<<endl;
    cout<<array2[4]<<endl;**/

    return 0;
}

