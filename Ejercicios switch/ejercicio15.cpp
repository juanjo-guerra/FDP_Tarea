#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario;
    int rango;

    cout << "=== Calculadora de Impuestos ===" << endl;
    cout << "Ingresa tu salario: $";
    cin >> salario;

    // Convertir salario a rango
    if (salario <= 0)        rango = -1;
    else if (salario <= 472) rango = 0;
    else if (salario <= 895) rango = 1;
    else if (salario <= 2038) rango = 2;
    else                     rango = 3;

    switch (rango){

        case -1:
            cout << "Salario invalido." << endl;
            break;

        case 0:
            cout << "Tu rango paga 0% de impuesto." << endl;
            cout << "Impuesto: $0.00" << endl;
            break;

        case 1:
            cout << "Tu rango paga 10% de impuesto." << endl;
            cout << "Impuesto: $" << (salario - 472) * 0.10 << endl;
            break;

        case 2:
            cout << "Tu rango paga 20% de impuesto." << endl;
            cout << "Impuesto: $" << 42.32 + (salario - 895) * 0.20 << endl;
            break;

        case 3:
            cout << "Tu rango paga 30% de impuesto." << endl;
            cout << "Impuesto: $" << 271.23 + (salario - 2038) * 0.30 << endl;
            break;
    }

    return 0;
}