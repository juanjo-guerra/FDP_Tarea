#include <iostream>
using namespace std;

int main(){

    string contra1,contra2;

    cout<<"Buenos días, para reestablecer su conraseña ingresa la nueva, por favor"<<endl;
    cin>>contra1;

    cout<<"Confirme su contraeña ingrsandola de nuevo"<<endl;
    cin>>contra2;

    if (contra1==contra2)
    {
        cout<<"Bienvenido, su contraseña ha sido cambiada correctamente"<<endl;
    }

    else
    {
        cout<<"Su contraseña no coincide, vuelva aprobar por favor"<<endl;
    }
    

    return 0;

    
    }
    