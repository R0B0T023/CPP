#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int opc, continuar, i;
  
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
                system("cls");
                cout<<"\t\tBusqueda Binaria\n\n";
                
                int cantidad;
                cout<<"De cuantos espacios quieres que sea el arreglo?: ";
                cin>>cantidad;
                
                int vec[cantidad]; 
                int inf,sup,mitad,dato;
                char band='F';

				for(int i=0;i<cantidad;i++)
				{
                cout<<"Favor de ingresar un numero: ";
                cin>>vec[i];
				}
				
				cout<<"Dame el numero a buscar: ";
				cin>>dato;
                
				inf=0;
                sup=cantidad;

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
                int numero, i=0, pos,cantidad;
                bool encontro=false;
                system("clear");
                cout<<"\t\tBusqueda Secuencial\n\n";

				cout<<"De cuantos espacios quieres que sea el arreglo? :";
				cin>>cantidad;
				
				int vec[cantidad];
				for(int i=0;i<cantidad;i++)
				{
                cout<<"Favor de ingresar un numero: ";
                cin>>vec[i];
				}
                cout<<"Favor de ingresar el numero a buscar: ";
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
