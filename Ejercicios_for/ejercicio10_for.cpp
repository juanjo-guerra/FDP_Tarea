/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci*/

#include <iostream>

using namespace std;

int main()
{

    int n1 = 0, n2 = 1, siguiente, numero;

    cout << "Ingresa tu numero para realizar la seie Fibonacci" << endl;
    cin >> numero;

    for (int i = 0; n1 <= numero; i++)
    {

        cout << n1 << endl;
        siguiente = n1 + n2;
        n1 = n2;
        n2 = siguiente;
    }

    return 0;
}