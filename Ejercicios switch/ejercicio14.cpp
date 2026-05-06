#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    

    int edad;

    cout<<"---Bienvenido ingrese tu  edad para verificar que tipo  de categoria puedes ver---"<<endl;
    cout<<"Ingrese tu edad"<<endl;
    cin>>edad;
    
    if (edad <=0 || edad>=105)
    {
         cout<<"Datos invalidos"<<endl;
    } 

    else if (edad >= 2 && edad<13)
    {
        cout<<"Tu solo puedes categorias  P y PG pero con supervision"<<endl;

    } 
    
    else if (edad >= 13 && edad<=17)
    {
        switch (edad)
        {
        case 13:
        case 14:
        case 15:      
        case 16:    
        case 17:
            cout<<"Te recomendariamos la categoria PG-13, G, PG, pero acompañado de un adulto y R pero acompañado"<<endl;
            break;
        
        }

    }
    else 
    {
        cout<<"Tu puedes ver cualquier categoria"<<endl;
    }
    
return 0 ;    
    
    
}

//  HECHO