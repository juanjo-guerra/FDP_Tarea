#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Ingresa el numero para hacer el triangulo" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int z = 1; z <= n - i; z++)
        {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}