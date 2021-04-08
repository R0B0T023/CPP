#include<stdio.h>
#include<iostream>
#include <stdio_ext.h>

using namespace std;

struct persona
{
    char nombre[50];
    int edad;
}
persona1, persona2;

int main()
{
    cout<<"El nombre de la persona 1 es: ";
    cin.getline(persona1.nombre,50,'\n');
    cout<<"La edad de la persona 1 es: ";
    cin>>persona1.edad;

    __fpurge(stdin);//vaciar memorias

    cout<<"\n\nEl nombre de la persona 2 es: ";
    cin.getline(persona2.nombre,50,'\n');
    cout<<"La edad de la persona 2 es: ";
    cin>>persona2.edad;

    cout<<"Imprimir datos:\n\n";

    cout<<"Persona 1: \n";
    cout<<"Nombre: "<<persona1.nombre<<"\n";
    cout<<"Edad: "<<persona2.edad<<"\n\n";

    cout<<"Persona 2: \n";
    cout<<"Nombre: "<<persona2.nombre<<"\n";
    cout<<"Edad: "<<persona2.edad<<"\n";
    
    return 0;
}