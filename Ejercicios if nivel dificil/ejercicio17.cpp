#include <iostream>
using namespace std;

int main(){

    float billetera=100, cobro;
    int edad, cant_ninos;

    cout <<"Buenos días, por favor ingresa la edad de su hijo"<<endl;
    cin>>edad;

    if (edad >=0 && edad <5)
    {

        cout <<"Bienvenido, su hijo no pagará ninguna tarifa al entrar al parque"<<endl;
    
    }
    else if (edad >= 5 && edad <= 12)
    {
        cobro= billetera -5;
        cout << "Bienvenido, su hijo pagara un monto de entrada de $5"<<endl;
        cout <<"Su cobro a su billetera se ha realizado, saldo total: "<<cobro<<endl;
        

    }
    else if (edad > 12)
    {
        cobro= billetera -10;
        cout << "Bienvenido, su hijo pagara un monto de entrada de $10" <<endl;
        cout <<"Su cobro a su billetera se ha realizado, saldo total: "<<cobro<<endl;
        
    }
    else
    {
        cout << "Rango de edad no valido"<<endl;
    }

    return 0;
    }
    
    
    
    


