#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    

    int salario;

    cout<<"Bienvenido vamos a verificar cuanto te toca pagar de salario"<<endl;
    cout<<"Ingresa tu salario"<<endl;
    cin>>salario;

    int rango= salario/1000;

    switch (rango)
    {
    case 0:
        if (salario >0 && salario <1000)
        {
            cout<<"tu descuento es del 0%"<<endl;
        }
        
        break;
    case 1:
        if (salario >1000 && salario <2000)
        {
            cout<<"tu descuento es del 10%"<<endl;
        }
    case 2:
    if (salario >2000)
        {
            cout<<"tu descuento es del 20%"<<endl;
        }
    
    default:
        if (salario <0)
        {
            cout <<"Monto de salario invalido"<<endl;
        }
        

        break;
    }
}