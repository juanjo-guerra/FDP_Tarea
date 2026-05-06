#include <iostream>
using namespace std;

int main(){ 

    char c;
    cout <<"Hola podrias ingresa una letra"<<endl;
    cin>>c;



    switch (c)
    {
    case  'L':
        cout<<"es Lune";
        break;

    case 'M':
        cout<< "es Martes}";
        break;

    case 'm':
        cout<<"Es miercoles";
        break;
    case 'J':
        cout<<"Es jueves";
        break;
    case 'V':
        cout<<"Es viernes";
        break;
    case 'S':
        cout<<"Es sabado";
        break;

    case 'D':
        cout<<"Es domingo";
        break;
    
    default:
        cout<<"datos incorrectos";
        break;
    }

    return 0;

}