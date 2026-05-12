#include <iostream>

using namespace std;

int main()
{
    
        int opcion, a=0, x=1, siguiente;

        cout<<"Ingresa tu numero para darte la serie Fibonnaci"<<endl;
        cin>>opcion;

        while (a <= opcion)

        {
            cout<<a<<endl;
            siguiente=a+x;
            a=x;
            x=siguiente;


    
            
        }
        


    return 0;
}