#include <iostream>

using namespace std;

int main(){

    int opcion;
    float monto, cambioEuro, cambioYen, cambioLibras, resultado;

    cout<<"---Bienvenido al conversor de dolares---"<<endl;
    cout<<"---Le mostraremos las opciones de conversion"<<endl;
    cout<<"---OPCIONES---"<<endl;
    cout<<"1--USD a EUR--"<<endl;
    cout<<"2--USD a JPY--"<<endl;
    cout<<"3--USD a GBP--"<<endl;

    cout<<"Ingresa tu opcion"<<endl;
    cin>>opcion;

    cout<<"Ingresa tu monto en dolares"<<endl;
    cin>>monto;

    
    switch (opcion)
    {
    case 1:
        cambioEuro= monto * 0.8551;
        resultado= cambioEuro;
        cout<<"Su monto de: " <<monto<< " en Euros es: " <<resultado<<endl;
    
        break;

    case 2:
        cambioYen= monto * 157.23;
        resultado= cambioYen;
        cout<<"Su monto de: " <<monto<< " en Yenes es: " <<resultado<<endl;
        
    break;

    case 3:
        cambioLibras= monto * 0.7390;
        resultado= cambioLibras;
        cout<<"Su monto de: " <<monto<< " en Libras esterlinas es: " <<resultado<<endl;
    break;

    default:

        cout<<"valor de opción no admitido"<<endl;
    break;
    }
    }


    
    

    


