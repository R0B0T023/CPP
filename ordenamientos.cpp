//Programa Ordenamientos

/*	Son 5
	1.- Burbuja
	2.- Shell
	3.- Sacudida
	4.- Insercion Directa
	5.- Seleccion
*/

#include<iostream>
#include<stdio.h>

using namespace std;

void imprimir(int [], int n);
void shell(int [], int n);

int main()
{
	int opc, opc2;
	do
	{
		
		system("cls");
		cout<<"\t\tPrograma de Ordenamientos.\n\n";
		
		cout<<"\tOpciones Disponibles:\n\n";
		cout<<"1.- Burbuja\n";
		cout<<"2.- Shell\n";
		cout<<"3.- Sacudida\n";
		cout<<"4.- Insercion Directa\n";
		cout<<"5.- Seleccion\n\n";
		
		cout<<"Seleccione la opcion que quiera realizar: ";
		cin>>opc;
		
		switch(opc)
		{
			//Metodo Burbuja
			case 1:
			{
				int cantidad;
				int i, j, aux;
				cout<<"\t\tOrdenamiento por metodo Burbuja.\n\n";	
				
				cout<<"De cuantos espacios quieres que sea el arreglo?: ";
				cin>>cantidad;
				
				int numeros[cantidad];
				for(i=1;i<=cantidad;i++)
				{
					cout<<"Dame el valor "<<i<<": ";
					cin>>numeros[i];
				}
				
				cout<<"\n";

    			for(i=1;i<cantidad;i++)
    			{
        			for(j=1;j<cantidad;j++)
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
    			for(i=1;i<cantidad+1;i++)
    			{
        			cout<<numeros[i]<<" ";
    			}
    			cout<<"\n\n";
			}
			break;
			
			//Metodo Shell
			case 2:
			{
				cout<<"\t\tOrdenamiento por metodo Shell.\n\n";
				
				int n,i,x[100],salto,tem,band;
				char s;

				cout<<"defina la cantidad de elementos:";cin>>n;
				for(i=0;i<n;i++)
				{
					cout<<"elemento["<<i<<"]:";cin>>x[i];
				}
				for(salto=n/2;salto>0;salto=salto/2)
				do
				{
				band=0;
				for(i=0;i<n-salto;i++)
				if(x[i]>x[i+salto])
				{
					tem=x[i];x[i]=x[i+salto];x[i+salto]=tem; band=1;
				}
				}while(band=0);
				for(i=0;i<n;i++)
				cout<<x[i]<<" ";
				cout<<endl;;	
			}
			break;
			
			//Metodo Sacudida
			case 3:
			{
				int i, k, Der, Izq, Aux, N, A[30];
    			
        		cout<<"\t\tOrdenamiento por metodo Sacudida.\n\n";
        		
            	cout<<"Ingrese el tamanio del arreglo : "<<endl; 
		        cin>>N;
		        k=N;
		        Izq=2;
		        Der=N;
		        
		        for(i=1;i<=N;i++)
				{
		            cout<<"["<<i<<"] : ";        
		            cin>>A[i];
		        }
		        do
				{//inicio del ordenamiento
		            for(i=Der;i>=Izq;i--)
					{//derecha a izquierda
		                if(A[i-1]>A[i])
						{
		                    Aux=A[i-1];
		                    A[i-1]=A[i];
		                    A[i]=Aux;
		                    k=i;
		                }
		        }
		            Izq=k+1;
		            for(i=Izq;i<=Der;i++)//izquierda a derecha
		                if(A[i-1]>A[i])
						{
		                    Aux=A[i-1];
		                    A[i-1]=A[i];
		                    A[i]=Aux;
		                    k=i;
		                }
		            Der=k-1;
		        }while(Izq<Der);//Fin del ordenamiento
		        
		        cout<<"\nArreglo Ordenado\n==================\n";
		        
		        for(i=1;i<=N;i++)
		        cout<<" "<<A[i];
		        cout<<endl;
			}
			break;
			
			//Metodo Insercion Directa
			case 4:
			{
				int cantidad;
				int i,pos,aux;
				
				cout<<"\t\tOrdenamiento por metodo Insercion Directa.\n\n";	
				
				cout<<"De cuantos espacios quieres que sea el arreglo?: ";
				cin>>cantidad;
				
				int numeros[cantidad];
				for(i=0;i<cantidad;i++)
				{
					cout<<"Dame el valor "<<i<<": ";
					cin>>numeros[i];
				}
				
				for(i=0;i<cantidad;i++)
				{
					pos=i;
					aux=numeros[i];
					
					while((pos>0) && (numeros[pos-1]>aux))
					{
						numeros[pos]=numeros[pos-1];
						pos--;
					}
					numeros[pos]=aux;
				}
				
				cout<<"Orden: \n";
				for(i=0;i<cantidad;i++)
				{
					cout<<numeros[i]<<" ";
				}
				
			}
			break;
			
			//Metodo Seleccion
			case 5:
			{
				int cantidad;
				cout<<"\t\tOrdenamiento por metodo Seleccion.\n\n";	
				
				cout<<"De cuantos espacios quieres que sea el arreglo?: ";
				cin>>cantidad;
				
				int numeros[cantidad];
				for(int i=0;i<cantidad;i++)
				{
					cout<<"Dame el valor "<<i<<": ";
					cin>>numeros[i];
				}
				
				int i,j,aux,min;
				
				for(i=0;i<cantidad;i++)
				{
					min=i;
					for(j=i+1;j<cantidad;j++)
					{
						if(numeros[j]<numeros[min])
						{
							min=j;
						}
					}
					aux=numeros[i];
					numeros[i]=numeros[min];
					numeros[min]=aux;
				}
				cout<<"Orden: \n";
				for(i=0;i<cantidad;i++)
				{
					cout<<numeros[i]<<" ";
				}
			}
			break;
		}
		cout<<"Quieres continuar en el programa?(1): ";
		cin>>opc2;
		
	}while(opc2==1);
	return 0;
}

