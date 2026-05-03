#include <iostream>
using namespace std;

int main(){

    int edad, experiencia, infracciones;
    string calificacion;

    cout<<"----Bienvenido, vamos a calificar al conductor----"<<endl;
    cout<<"Por favor, ingrese su edad"<<endl;
    cin>>edad;
    cout<<"Por favor, ingrese su años de experiencia"<<endl;
    cin>>experiencia;
    cout<<"Por favor, ingrese su numero de infracciones"<<endl;
    cin>>infracciones;

    if (edad<18)
    {
        calificacion= "No apto (menor de edad)";
    }

    else if (experiencia > 5 && infracciones == 0)
    {
        calificacion= "Conductor excelente";
    }

    else if ( infracciones >=1 && infracciones<=3)
    {
        calificacion= "conductor regular";
    }
    
    else if (experiencia <2 && infracciones > 3)
    {
        calificacion= "conductor riesgoso";
    }
    else
    {
        calificacion="conductor estandar";
    }
    
    cout<<"Estado del conductor: " <<calificacion<<endl;

    return 0;
    
    
    

    
    }
    