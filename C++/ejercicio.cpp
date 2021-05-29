#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int arreglo[10];
    int *apuntador;
    for(int i=0;i<10;i++)
    {
        cout<<"Dame numero "<<i<<": ";
        cin>>arreglo[i];

        
    }
    apuntador=arreglo;
    for(int i=0;i<10;i++)
    {
        if(*apuntador%2==0)
        {
            cout<<"El numero "<<*apuntador<<" es par\n";
        }
        *apuntador++;
    }
    cout<<"\n"<<*apuntador;


    return 0; 
}