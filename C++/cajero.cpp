#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int inicial=1000, saldo, reintegro, opcion, agregar;

    cout<<"\tBienvenido a Cajero Automatico Virtual\n";
    cout<<"Escoja una opcion\n";
    cout<<"1. Ingreso a cuenta\n";
    cout<<"2. Retiro\n";
    cout<<"3. Saldo de la cuenta\n";
    cout<<"0. Salir\n\n";

    cout<<"opcion: ";
    cin>>opcion;

    if(opcion==1)
    {
        cout<<"ingrese la cantidad a depositar: ";
        cin>>agregar;
        saldo=inicial+agregar;
        cout<<"cantidad disponible en la cuenta: "<<saldo<<"\n";
    } 
    else if(opcion==2)
    {
        cout<<"cuanto desea retirar: ";
        cin>>reintegro;
        if(reintegro>1000)
        {
            cout<<"Sin saldo suficiente.\n";
            cout<<"cuanto desea retirar: ";
            cin>>reintegro;
        }
        saldo=inicial-reintegro;
        cout<<"Saldo disponible en la cuenta: "<<saldo<<"\n";
    }
    else if(opcion==3)
    {
        cout<<"La cantidad disponible es de: "<<inicial<<"\n";
    }
    else if(opcion==0)
    {
        cout<<"Gracias por ocupar el cajero.\n";
    }
    else
    {
        cout<<"No cuento con esa opcion.\n";
    }

    return 0;
}