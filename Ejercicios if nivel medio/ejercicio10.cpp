#include <iostream>
using namespace std;

int main(){

    float peso;

    cout<< "Ingresa el peso del paquete para saber el costo"<<endl;
    cin>>peso;

    if (peso > 0 && peso<= 5)
    {
        cout<<"Tu paquete pesa: " <<peso<< ". Por eso te cobraremos $5"<<endl;
    }
    else if (peso>= 6 && peso<=10)
    {
        cout<<"Tu paquete pesa: "<<peso<< " . Por eso te cobraremos $10"<<endl;
    }
    else if (peso>10)
    {
        cout<<"Tu paquete pesa: " <<peso<< " . Por eso te cobraremos $15"<<endl;

    }
    else
    {
        cout <<"Cantidad de peso invalida"<<endl;
    }
    
    
    return 0;
    
}