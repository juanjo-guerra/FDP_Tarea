#include <iostream>
using namespace std;

int main(){

    float velocidad;
    

    cout <<"Bienvenido, ingresa tu velocidad alcanzada por favor"<<endl;
    cin>> velocidad;

    if (velocidad >0 && velocidad <60)
    {
        cout << "Limite de velcidad no excedido, No tendrás que pagar multa"<<endl;
    }
    else if (velocidad >= 60 && velocidad <= 80)
    {
        cout << "Superaste el primer limite de velocidad permitido, tendrás que pagar un multa de 150 dolares"<<endl;

    }
    else if (velocidad >80)
    {
         cout << "Superaste el segundo limite de velocidad permitido, tendrás que pagar un multa de 200 dolares"<<endl;
    }
    else
    {
        cout << "Valor de velocidad introducido no valido" <<endl;
    }
    
    return 0;

}

