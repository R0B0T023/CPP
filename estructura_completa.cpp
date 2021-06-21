#include<stdio.h>
#include<iostream>
#include <stdio_ext.h>

using namespace std;

struct CD
{
    char titulo[50];
    char artista[50];
    int ncanciones;
    float precio;
    char fcompra[50];
}
cd1,cd2,cd3;

int main()
{
    cout<<"El titulo del cd 1 es: ";
    cin.getline(cd1.titulo,50,'\n');
    cout<<"El artista del cd 1 es: ";
    cin.getline(cd1.artista,50,'\n');
    cout<<"El numero de canciones del cd 1 es: ";
    cin>>cd1.ncanciones;
    cout<<"El precio del cd 1 es: ";
    cin>>cd1.precio;
    __fpurge(stdin);
    cout<<"La fecha de compra del cd 1 fue: ";
    cin.getline(cd1.fcompra,50,'\n');

    __fpurge(stdin);//vaciar memorias

    cout<<"\nEl titulo del cd 2 es: ";
    cin.getline(cd2.titulo,50,'\n');
    cout<<"El artista del cd 2 es: ";
    cin.getline(cd2.artista,50,'\n');
    cout<<"El numero de canciones del cd 2 es: ";
    cin>>cd2.ncanciones;
    cout<<"El precio del cd 2 es: ";
    cin>>cd2.precio;
    __fpurge(stdin);
    cout<<"La fecha de compra del cd 2 fue: ";
    cin.getline(cd2.fcompra,50,'\n');

    __fpurge(stdin);//vaciar memorias

    cout<<"\nEl titulo del cd 3 es: ";
    cin.getline(cd3.titulo,50,'\n');
    cout<<"El artista del cd 3 es: ";
    cin.getline(cd3.artista,50,'\n');
    cout<<"El numero de canciones del cd 3 es: ";
    cin>>cd3.ncanciones;
    cout<<"El precio del cd 3 es: ";
    cin>>cd3.precio;
    __fpurge(stdin);
    cout<<"La fecha de compra del cd 3 fue: ";
    cin.getline(cd3.fcompra,50,'\n');

    __fpurge(stdin);//vaciar memorias

    cout<<"\nImprimir datos:\n\n";

    cout<<"cd 1: \n";
    cout<<"Titulo: "<<cd1.titulo<<"\n";
    cout<<"Artista: "<<cd1.artista<<"\n";
    cout<<"No. de canciones: "<<cd1.ncanciones<<"\n";
    cout<<"Precio: $"<<cd1.precio<<"\n";
    cout<<"Fecha de compra: "<<cd1.fcompra<<"\n\n";    
    
    cout<<"cd 2: \n";
    cout<<"Titulo: "<<cd2.titulo<<"\n";
    cout<<"Artista: "<<cd2.artista<<"\n";
    cout<<"No. de canciones: "<<cd2.ncanciones<<"\n";
    cout<<"Precio: $"<<cd2.precio<<"\n";
    cout<<"Fecha de compra: "<<cd2.fcompra<<"\n\n";

    cout<<"cd 3: \n";
    cout<<"Titulo: "<<cd3.titulo<<"\n";
    cout<<"Artista: "<<cd3.artista<<"\n";
    cout<<"No. de canciones: "<<cd3.ncanciones<<"\n";
    cout<<"Precio: $"<<cd3.precio<<"\n";
    cout<<"Fecha de compra: "<<cd3.fcompra<<"\n\n";
    
    return 0;
}