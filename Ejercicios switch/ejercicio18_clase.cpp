#include <iostream>
using namespace std;

int main()
{

    int opcion;
    float resultado, datos;

    cout << "Bienvenido al sistema de coversiones, ingresa tu opcion" << endl;
    cout << "1. cm a pulgadas" << endl;
    cout << "2. metros a pies" << endl;
    cout << "3. km a millas" << endl;

    cout << "Ingresa tu opcion" << endl;
    cin >> opcion;

    cout << "Ingresa tus datos a convertir" << endl;
    cin >> datos;

    
    switch (opcion)
    {
    case 1:

        resultado = (datos / 2.54);
        cout << "Tus centimetros en pulgado son: " << resultado << " pulgadas";
        break;

    case 2:

        resultado = (datos * 3.28084);
        cout << "Tus metros en pies son: " << resultado << " pulgadas";

        break;

    case 3:

        resultado = (datos * 0.62137);
        cout << "Tus kilometros en millas son: " << resultado << " pulgadas";
        break;

        default:
        cout<<"Opcion no valida";
        break;

    
    }
    
    
    

    return 0;
}