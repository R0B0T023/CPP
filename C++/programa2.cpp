#include<iostream>
#include<stdio.h>

using namespace std;

int registra()
{
    string usr, pass;
    system("clear");
    cout<<"Registra\n";
    cout<<"Escribe el Usuario: ";
    cin>>usr;
    string* punterousr = &usr;
    cout<<"Escribe la Contraseña: ";
    cin>>pass;
    string* punteropass = &pass;
    cout<<"usr: "<<*punterousr<<"\n";
    cout<<"pass: "<<*punteropass<<"\n";
    //system("clear");
    return 0; 
}

int consulta()
{
    system("clear");
    cout<<"Consulta\n";
    return 0;
}

int main()
{
    etimenu:
    int menu;
    //system("clear");
    cout<<"Bienvenido\n\n";

    cout<<"1) Registrar Usuario.\n";
    cout<<"2) Consultar Registro.\n\n";
    cout<<"Opcion: ";
    cin>>menu;

    if(menu==1)
    {
        registra();
    }

    if(menu==2)
    {
        consulta();
    }

    goto etimenu;

    return 0;

}
