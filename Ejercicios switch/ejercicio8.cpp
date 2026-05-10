#include <iostream>
using namespace std;

int main(){

    float a, b, c;

    cout << "--- Bienvenido, ingrese los lados para verificar el tipo de triangulo ---" << endl;
    
    cout << "Ingrese el primer lado: ";
    cin >> a;

    cout << "Ingrese el segundo lado: ";
    cin >> b;

    cout << "Ingrese el tercer lado: ";
    cin >> c;

    
    if (a <= 0 || b <= 0 || c <= 0 || 
        (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "Los lados ingresados NO forman un triangulo valido." << endl;
        return 0;
    }

    
    int iguales = (a == b) + (b == c) + (a == c);

    switch (iguales){
        case 3:
            cout << "Es un triangulo EQUILATERO (los 3 lados son iguales)" << endl;
            break;
        case 1:
            cout << "Es un triangulo ISOSCELES (2 lados son iguales)" << endl;
            break;
        case 0:
            cout << "Es un triangulo ESCALENO (todos los lados son diferentes)" << endl;
            break;
    }

    return 0;
}