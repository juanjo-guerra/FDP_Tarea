#include <iostream>
using namespace std;

int main(){

    float nota;
    cout << "Bienvenido, Ingresa tu nota para saber si aprobaste o reprobaste"<<endl;
    cin>>nota;

    if (nota < 60)
    {
        cout << "El estudiante no aprobo" <<endl;

    }
    else if (nota >= 60 & nota < 100)
    {
        cout <<"El estudiante aprobo" <<endl;
    }

    else
    {
        cout << "Rango de nota invalida"<<endl;

    }

    return 0;
    
    
}