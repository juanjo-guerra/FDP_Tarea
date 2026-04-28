#include <iostream>
using namespace std;

int main(){

    int edad;

    cout << "Bienvenido, vamos a verificar su edad. " <<endl;
    cout << "Introduzca su edad" << endl;
    cin >>edad;

    if (edad <= 18)
    {
        cout << "Usted es menor de edad. " <<endl;
    }
    else if (edad >= 18 & edad < 120)
    {
        cout << "Usted mayor de edad. " <<endl;
    }
    else 
    {
        cout <<"Rango de edad invalido"<<endl;
    }
    
    return 0;
}