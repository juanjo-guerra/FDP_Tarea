#include <iostream>
using namespace std;

int main ()
{
    int puntaje;

    cout<<"Ingresa el puntaje del jugador, el puntaje es del 1-5"<<endl;
    cin>>puntaje;

    switch (puntaje)
    {
    case 1:
        cout<<"El jugador es remalo";
        break;

    case 2:
        cout<<"El jugador es malo";
        break;
    case 3:
        cout<<"El jugador es regular";
    
    case 4:
        cout<<"El jugador es bueno ";
        break;
    case 5:
        cout<<"El jugador es excelente";
    default:
        break;
    }

}