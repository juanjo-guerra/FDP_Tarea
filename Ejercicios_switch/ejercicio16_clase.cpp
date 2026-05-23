#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout << "Bienvenido, selecciona el dia de la semana y te mostraremos tu horario formato (L=(Lunes)y m=(Miercoles))" << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Sabado" << endl;
    cout << "7. Domingo" << endl;

    cout << "Ingresa tu opcion" << endl;
    cin >> opcion;

    if (opcion >= 1 && opcion <= 7)
    {
        switch (opcion)
        {
        case 1:
            cout << "Tu horario el día lunes es:";
            break;
        case 2:
            cout << "Tu horario el día martes es:";
            break;
        case 3:
            cout << "Tu horario el día miercoles es:";
            break;
        case 4:
            cout << "Tu horario el día jueves es:";
            break;
        case 5:
            cout << "Tu horario el día viernes es:";
            break;
        case 6:
            cout << "Tu horario el día sabado es:";
            break;
        case 7:
            cout << "Tu horario el día domingo es:";
            break;
        }
    }
    else

    {
        cout << "Dato no valido" << endl;
    }

    return 0;
}