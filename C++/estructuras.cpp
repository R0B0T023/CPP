#include<stdio.h>
#include<iostream>

using namespace std;

struct persona
{
    char nombre[50];
    int edad;
}
persona1={"Angel",28}, 
persona2={"Gabriela",15};

int main()
{
    cout<<"El nombre de la persona 1 es: "<<persona1.nombre<<"\n";
    cout<<"La edad de la persona 1 es: "<<persona1.edad<<"\n\n";

    cout<<"El nombre de la persona 2 es: "<<persona2.nombre<<"\n";
    cout<<"La edad de la persona 2 es: "<<persona2.edad<<"\n";
    
    return 0;
}