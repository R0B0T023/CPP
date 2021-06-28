#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int opc, continuar;
  
    do
    {  
        system("clear");
        cout<<"\t\tPrograma de Busquedas\n\n";

        cout<<"\tMenu.\n";
        cout<<"1) Busqueda Binaria\n";
        cout<<"2) Busqueda Secuencial\n\n";
        cout<<"Seleccione una opcion: ";
        cin>>opc;

        switch(opc)
        {
            case 1:
            {
                system("clear");
                cout<<"\t\tBusqueda Binaria\n\n";
                
                int vec[16]={2,4,5,6,8,9,9,35,47,59,77,78,98,99,123,125}; 
                int inf,sup,mitad,dato;
                char band='F';

                cout<<"Favor de ingresar un numero: ";
                cin>>dato;

                inf=0;
                sup=16;

                while(inf<=sup)
                {
                    mitad=(inf+sup)/2;

                    if(vec[mitad]==dato)
                    {
                        band='V';
                        break;
                    }
                    
                    if(vec[mitad]>dato)
                    {
                        sup=mitad;
                        mitad=(inf+sup)/2;
                    }
                    if(vec[mitad]<dato)
                    {
                        inf=mitad;
                        mitad=(inf+sup)/2;
                    }
                }

                if(band=='V')
                {
                    cout<<"El numero a sido encontrado en la posicion: "<<mitad+1<<"\n";
                }
                else
                {
                    cout<<"El numero no a sido encontrado. \n";
                }
            }
            break;

            case 2:
            {
                int numero, i=0, pos,vec[16]={2,4,5,6,8,9,9,35,47,59,77,78,98,99,123,125};
                bool encontro=false;
                system("clear");
                cout<<"\t\tBusqueda Secuencial\n\n";

                cout<<"Favor de ingresar un numero: ";
                cin>>numero;

                while(!(encontro) && i<16)
                {
                    if(numero==vec[i])
                    {
                        encontro=true;
                        pos=i;
                    }
                    i=i+1;
                }
                if(encontro)
                {
                    cout<<"\nEl dato se encuentra y esta en la posicion: "<<pos+1;
                }
                else
                {
                    cout<<"\nEl dato no se encontro en el arreglo.";
                }
            }
            break;
        }
        
        cout<<"\n\nDesea Hacer otra Busqueda?(1): ";
        cin>>continuar;
    }
    while(continuar==1);
    
    return 0;
}
