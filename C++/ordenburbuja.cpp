#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int numeros[]={3,5,4,2,1,6};
    int i,j,aux;

    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(numeros[j] > numeros[j+1])
            {
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux; 
            }
        }
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