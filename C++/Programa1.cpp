#include<stdio.h>
#include<iostream>
#include<stdio_ext.h>

using namespace std;

        int n, i;
        char Nombre[50];
        char direccion[30];
        char ciudad[20];
        char provincia[20];

int main()
{
    cout<<"Cuantos usuarios desea registrar: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        __fpurge(stdin);
        cout<<"Escriba el nombre"<<i<<": ";
        cin>>Nombre;
        __fpurge(stdin);
        cout<<"Escriba la direccion"<<i<<": ";
        cin>>direccion;
        __fpurge(stdin);
        cout<<"Escriba la ciudad"<<i<<": ";
        cin>>ciudad;
        __fpurge(stdin);
        cout<<"Escriba la provincia"<<i<<": ";
        cin>>provincia;
        __fpurge(stdin);
    }
    
    return 0;
}