#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout << "Bienvenido al sistema de transporte" << endl;
    cout << "Seleccion uno" << endl;
    cout << "---1. Bus---" << endl;
    cout << "---2. Metro---" << endl;
    cout << "---3. Taxi---" << endl;

    cout << "Ingresa tu opción elegida" << endl;
    cin >> opcion;

    if (opcion >= 1 && opcion <= 7)
    {
        switch (opcion)
        {
        case 1:
            cout << "El bus tiene un costo de $0.20";
            break;

        case 2:
            cout << "El metro tiene un costo de $1.00";
            break;

        case 3:
            cout << "El taxi tiene un costo de $5.00";
            break;
        }
    }
    else
    {
        cout << "Opcion no valida" << endl;
    }

    return 0;
}
