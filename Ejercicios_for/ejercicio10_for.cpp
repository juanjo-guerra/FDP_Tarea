/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci*/

#include <iostream>

using namespace std;

int main()
{

    int n=0, siguiente;
    

    for (int i = 1; i <= n; siguiente= i +n)
    {

        cout<<i<<endl;

        
        n= i;
        i= siguiente;


    }
}