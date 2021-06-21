#include<stdio.h>
#include<iostream>

using namespace std;

int main ( )
{
int var=1, *apun;
apun = &var;
cout<<"\n Acceso directo, "<<var<<"\n";
cout<<"\n Acceso indirecto, "<<*apun<<"\n";
cout<<"\n La dirección de var= "<<&var<<"\n";
cout<<"\n LA dirección de var= "<<apun<<"\n";
}