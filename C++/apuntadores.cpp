#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{

float pi = 3.1416;

float* punterodepi=&pi;

cout<<"Imprimir pi"<<pi<<"\n";

cout<<"Valor de la memoria del puntero" <<&pi<<"\n";

cout<<"Que hay almacenado en la memoria"<<punterodepi<<" "<<*punterodepi<<"\n"; *punterodepi=900;

cout<<"Que hay almacenado en la memoria"<<punterodepi<<" " <<*punterodepi<<" "<<&pi<<"\n";

return 0;


    return 0;
}