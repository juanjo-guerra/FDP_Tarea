#include <iostream>
using namespace std;

int main (){

    float a,b;

    cout << "Bienvenido, vamos a validar tus numeros"<<endl;
    cout<< "Ingresa tu primer numero"<<endl;
    cin>> a;

    cout << "Ingresa tu segundo numero"<<endl;
    cin>>b;

    if (a>b)
    {
        cout<< "El numero mayor es: " << a << " . EL numero menor es: " << b << endl;
    }
    else if (b>a)
    {
        cout<< "El numero mayor es: " << b << " . EL numero menor es: " << a << endl;
    }

    else
    {
        cout<< "Tus numeros:  "<< a << " y  " << b << " son iguales. " << endl;
    }

    return 0;
    
    

}