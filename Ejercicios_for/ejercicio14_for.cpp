#include <iostream>

using namespace std;

int main()

{

    int numero, invertido = 0, siguiente, division;

    cout << "Bienvenido, vamos a invertir tu numero\n";
    cout << "Ingresa el numero, por favor\n";
    cin >> numero;

    for (int i = 1; numero > 0; i++)
    {
        division = numero % 10;
        invertido = (invertido * 10) + division;
        numero = numero / 10;
    }

    cout << "Tu numero invertido es el siguiente: " << invertido;

    return 0;
}
