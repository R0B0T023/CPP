#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int numeros[]={3,5,4,2,1,6};
    int i,pos,aux;

    for(i=0;i<6;i++)
    {
        pos=i;
        aux=numeros[i];
        
        while((pos>0) && (numeros[pos-1] > aux))
        {
            numeros[pos]=numeros[pos-1];
            pos--;
        }
        numeros[pos]=aux;
    }

    cout<<"orden ascendente: \n";
    for(i=0;i<6;i++)
    {
        cout<<numeros[i]<<" ";
    }
    cout<<"\norden descendente: \n";
    for(i=5;i>=0;i--)
    {
        cout<<numeros[i]<<" ";
    }
    
    return 0;
}