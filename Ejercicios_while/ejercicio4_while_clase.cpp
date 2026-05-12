#include <iostream>

using namespace std;

int main()
{
    
    char opcion; 

    do
    {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Pollo" << endl;
        cout << "2. Arroz" << endl;
        cout << "5. Salir" << endl;
        cout << "Presiona una tecla: ";
        
        cin >> opcion;

        
        if (opcion == '1') {
            cout << "Elegiste el Pollo." << endl;
        } 
        else if (opcion == '2') {
            cout << "Elegiste el Arroz." << endl;
        }
        else if (opcion != '5') {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != '5'); 

    cout << "--- ¡Gracias por visitarnos! ---" << endl;

    return 0;
}