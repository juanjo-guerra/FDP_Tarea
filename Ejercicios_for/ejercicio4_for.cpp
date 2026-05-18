/*Tabla de Multiplicar
Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout<<"Ingresa tu numero para mostrar la tabla de multiplicar";
    cin>>n;


    for (int i = 1; i <=10; i++)
    {
        
        cout<<"tu tabla de multiplicar del: "<<n<<endl;

        cout<<"Resultado: "<<n<< " * "<<i<< " = " <<n*i<<endl;
    }
    

}