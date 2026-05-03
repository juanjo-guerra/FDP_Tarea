#include <iostream>
using namespace std;

int main(){

    float totalFinal, total2,cargos_electricos, tasasm= 3, consumo, comercializacion= 1.01, iva=1.13, precio1=0.185, cargo1=0.02, precio2=0.190, cargo2=0.04, precio3=0.188, cargo3=0.08, subsidio;

    cout<< "-------Bienvenido, ingrese su consumo de energía----------"<<endl;
    cin>>consumo;

    if (consumo < 100)
    {
        subsidio=5.00;
        //Calculos 
        cargos_electricos= ((consumo * cargo1) + (consumo * precio1)+ comercializacion);
        total2= ((cargos_electricos - subsidio) * 1.13);
        totalFinal= total2 + tasasm;

        // resultados
        cout<<"Tu consumo es en tarifa baja, por lo tanto tienes subsidio de $5."<<endl;
        cout<<"El total a pagar sería: $" << totalFinal <<endl;
    }

    else if (consumo >= 100 && consumo <= 200)
    {
        //Calculos
        cargos_electricos=((consumo * cargo2) + (consumo * precio2)+ comercializacion);
        total2= (cargos_electricos * 1.13);
        totalFinal= total2 + tasasm;

        cout<<"Tu consumo es en tarifa media, por lo que no tienes subsidio."<<endl;
        cout<<"El total a pagar sería: $" << totalFinal <<endl;
    }

    else if (consumo > 200)
    {
        //Calculos
        cargos_electricos=((consumo * cargo3) + (consumo * precio3)+ comercializacion);
        total2= (cargos_electricos * 1.13);
        totalFinal= total2 + tasasm;

        cout<<"Tu consumo es en tarifa alta, por lo que no tienes subsidio."<<endl;
        cout<<"El total a pagar sería: $" << totalFinal <<endl;
    }
    else 
    {
        cout<<"Datos erroneos ingresados"<<endl;
    }
    return 0;

    
    }
    