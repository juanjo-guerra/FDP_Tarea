#include <iostream>

using namespace std;

int main()

{

    int base, exponente, multiplicacion = 1;

    cout << "Bienvenido al covertidor de potencias\n";
    cout << "Ingresa la base, por favor\n";
    cin >> base;

    cout << "Ingresa el exponente\n";
    cin >> exponente;

    for (int i = 1; i <= exponente; i++)
    {

        multiplicacion = multiplicacion * base;

        
    }
    cout << "Tu numero " << base << " elevado a la " << exponente << " es: " << multiplicacion << "\n";

    return 0;
}
