#include <iostream>
using namespace std;

int main(){

    string user, password, usuario="tobi_30", contrasena="3006";

    cout<< "Ingresa tu usuario"<<endl;
    cin>>user;

    cout<< "Ingresa la contraseña"<<endl;
    cin>>password;


    if (user==usuario && password==contrasena)
    {
        cout<< "Usuario y contraseña validos. "<<endl;
        cout<<"Bienvenido"<<endl;
    }
    else
    {
        cout<< "Usuario y contraseeña invalido :("<<endl;
    }
    
    
    
    return 0;
}