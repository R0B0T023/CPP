#include<iostream>
#include<stdio.h>

using namespace std;

int main ()
{

int opcion;

cout<< "Menu\n\n";

cout <<" 1- Pila\n"; 
cout <<" 2- Cola\n";

cout << "Dame una opcion: ";
cin>>opcion;

switch (opcion)
{

case 1:

cout<<"selecciono pila\n";

break;

case 2:

cout<<"selecciona cola\n";

break;
}

return 0;
}