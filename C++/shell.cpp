#include<iostream>
#include<stdio.h>

using namespace std;
int Arreglo[100];
void LeerArreglo(int Numero);
void EscribeArreglo(int Numero);
void Shell(int Numero);

int main(){
    int Num, opc;
    cout<<"MENU:\n\n";

    cout<<"1.- Shell\n";
    cout<<"2.- Burbuja\n";
    cout<<"Por que metodo quieres ordenar tu arreglo: ";
    cin>>opc;

    switch(opc)
    {
        case 1:
    {
    cout<<"Ingrese dimension del arreglo : ";
    cin>>Num;
    LeerArreglo(Num);
    Shell(Num);
    cout<<endl;
    EscribeArreglo(Num);
    }
    break;

        case 2:
        {
             int numeros[]={3,5,4,2,1,6};
    int p,o,auxi;

    for(p=0;p<6;p++)
    {
        for(o=0;o<6;o++)
        {
            if(numeros[o] > numeros[o+1])
            {
                auxi=numeros[o];
                numeros[o]=numeros[o+1];
                numeros[o+1]=auxi; 
            }
        }
    }

    cout<<"orden ascendente por metodo Burbuja: \n";
    for(p=0;p<6;p++)
    {
        cout<<numeros[p]<<" ";
    }
        }

    }
    return 0;
}

void LeerArreglo(int Numero){
    int i;
    for(i=1;i<=Numero;i++)
    {
        cout<<"Arreglo["<<i<<"]=";
        cin>>Arreglo[i];
    }
}

void EscribeArreglo(int Numero){
    int i;
    cout<<"elementos ordenados por metodo Shell: "<<endl;
    for(i=1;i<=Numero;i++)
    {
        
        cout<<"\t"<<Arreglo[i];
    }
}

void Shell(int Numero){
    int i,j,k,incremento,aux;
    
    incremento=Numero/2;
    
    while(incremento>0){
        for(i=incremento+1;i<=Numero;i++){
            j=i-incremento;
            while(j>0){
                if(Arreglo[j]>=Arreglo[j+incremento]){
                    aux = Arreglo[j];
                    Arreglo[j] = Arreglo[j+incremento];
                    Arreglo[j+incremento] = aux;
                }
                else{
                        j=0;
                    }
                j=j-incremento;
            }
        }
        incremento=incremento/2;
    }
}