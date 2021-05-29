#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    cout<<"Apuntadores/punteros\n";
    int arreglo[10]={1,2,3,4,5,6,7,8,9,0};
    int *apuntador;
    apuntador=arreglo;
    for(int i=0;i<10;i++)
    {
        cout<<arreglo[i]<<"\n";
        cout<<*apuntador++<<"\n";
        cout<<"En que espacio de memoria se encuentra?\n";
        cout<<apuntador++<<"\n";
    }


    return 0; 
}