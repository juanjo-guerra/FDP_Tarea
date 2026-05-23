#include <iostream>
using namespace std;

int main()
{

    float peso;
    int cobro, billetera = 100;

    cout << "Ingresa el peso del paquete para saber el costo" << endl;
    cin >> peso;

    if (peso > 0 && peso <= 5)
    {
        cobro = billetera - 5;
        cout << "Su cobro se realizo correctamente. Su nuevo saldo es de " << cobro << endl;
    }
    else if (peso >= 6 && peso <= 10)
    {
        cobro = billetera - 10;
        cout << "Su cobro se realizo correctamente. Su nuevo saldo es de " << cobro << endl;
    }
    else if (peso > 10)
    {
        cobro = billetera - 15;
        cout << "Su cobro se realizo correctamente. Su nuevo saldo es de " << cobro << endl;
    }
    else
    {
        cout << "Cantidad de peso invalida" << endl;
    }

    return 0;
}