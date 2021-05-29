#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int arreglo[5];
    int *apuntador;
    int suma=0, consta=5;
    float promedio;

    for(int i=0;i<5;i++)
    {
        cout<<"Dame calificacion "<<i<<": ";
        cin>>arreglo[i];
    }

    apuntador=arreglo;

    for(int i=0;i<5;i++)
    {
        suma+=apuntador[i];
    }
    

    cout<<"la suma de las calificaciones es: "<<suma<<"\n";

    promedio=suma/consta;

    cout<<"El promedio de la suma de las calificaciones es: "<<promedio<<"\n";

    return 0; 
}