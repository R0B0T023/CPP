#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdio_ext.h>

using namespace std;

struct corredor
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}
c1;

int main()
{
    char categoria[20];

    cout<<"Escriba el nombre: ";
    cin.getline(c1.nombre,20,'\n');
    cout<<"Escriba edad: ";
    cin>>c1.edad;
    __fpurge(stdin);
    cout<<"Sexo: ";
    cin.getline(c1.sexo,10,'\n');
    cout<<"Club: ";
    cin.getline(c1.club,20,'\n');

    if(c1.edad <=18)
    {
        strcpy(categoria,"Juvenil");
    }
    else if(c1.edad <=40)
    {
        strcpy(categoria,"Senior");
    }
    else
    {
        strcpy(categoria,"Veterano");
    }

    cout<<"\n\nDatos del corredor: \n\n";
    cout<<"Nombre: "<<c1.nombre<<"\n";
    cout<<"Edad: "<<c1.edad<<"\n";
    cout<<"Sexo: "<<c1.sexo<<"\n";
    cout<<"Club: "<<c1.club<<"\n";
    cout<<"Categoria: "<<categoria<<"\n";
    
    return 0;
}