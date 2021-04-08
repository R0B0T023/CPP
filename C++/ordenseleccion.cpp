#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int numeros[]={7,2,1,8,3};
    int i,j,min,aux;

    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(numeros[j] < numeros[min])
            {
                min=j;
            }
        }
        aux=numeros[i];
        numeros[i]=numeros[min];
        numeros[min]=aux;
    }
    cout<<"orden ascendente: \n";
    for(i=0;i<5;i++)
    {
        cout<<numeros[i]<<" ";
    }
    cout<<"\norden descendente: \n";
    for(i=4;i>=0;i--)
    {
        cout<<numeros[i]<<" ";
    }    
    return 0;
}