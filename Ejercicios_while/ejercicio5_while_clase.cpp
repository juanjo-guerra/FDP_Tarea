#include <iostream>

using namespace std;

int main ()
{
    int N, par= 0, suma;

    cout<<"Ingresa el numero que vamos a operar"<<endl;
    cin>>N;

    while (N>=1)
    {
        
        if (N % 2==0)
        {
            cout<<"Su numero par es: " <<N<<endl;
            par=N + par;
            
            
        }

        N--;
        
        

        

    }

    
    cout<<"La suma de los pares es: " <<par<<endl;
    
    return 0;
}