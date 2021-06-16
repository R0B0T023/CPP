#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
};
//Para que una subfunción funcione es necesario declararla primero
//las líneas de abajo se llaman prototipos
Nodo *crearNodo(int);
void mostrararbol(Nodo *, int);
void menu();
void insertarNodo (Nodo *&,int);
Nodo *arbol=NULL;

int main() {
	menu();
	
	return 0;
}

void menu()
{
		int dato,otro,opc,opc2,i=0;
		do
		{
		
		cout<<"1)Llenar el arbol\n";
		cout<<"2)Mostrar el arbol\n";
		cin>>opc;
		switch (opc)
		{
		case 1: //Llenar el arbol
				do
		{
		cout<<"Digita un numero\n";
		cin>>dato;
		insertarNodo(arbol,dato);
		cout<<"Deseas insertar otro nodo? 1=Si\n";
		cin>>otro;
		}
		while(otro==1);
			break;
		case 2: //Mostrar el arbol
		mostrararbol(arbol,i);
		cout<<endl;
		break;
		}
		cout<<"Continuar 1=SI";
		cin>>opc2;
		}while(opc2==1);
	
}

Nodo *crearNodo(int nod)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = nod;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	return nuevo_nodo;
}

void insertarNodo (Nodo *&arbol,int nod)
{
if (arbol==NULL)
{
	Nodo *nuevo_nodo = crearNodo(nod);
	arbol =nuevo_nodo;
}
else
{
	int nodopadre = arbol->dato;
	if (nod<nodopadre)
	{
		insertarNodo(arbol->izq,nod);
	}
	else
	{
		insertarNodo(arbol->der,nod);
	}
	
}
}
void mostrararbol(Nodo *arbol, int i)
{
if (arbol==NULL)
{
//	cout<<"Arbol Vacío\n";
	return;
}
else
{
	mostrararbol(arbol->der,i+1);
for (int o=0;o<i;o++)
{
		cout<<"  ";
	}
	cout<<arbol->dato<<endl;
	mostrararbol(arbol->izq,i+1);	
}
	

}