#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0;

    cout << "Ingresa tu numero" << endl;
    cin >> n;

    while (n != 0)
    {

        suma = suma + n;
        cin >> n;
    }

    cout << "La suma de sus numero es: " << suma << endl;

    return 0;
}