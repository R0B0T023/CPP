#include<stdio.h>
#include<iostream>
#include<stdio_ext.h>

using namespace std;

struct promedio
{
    float calif1, calif2, calif3, prom;
};

struct alumnos
{
    char nombre[20], sexo[20];
    int edad;
    struct promedio prom_alu;
}
alumno1;

int main()
{
    system("clear");
    __fpurge(stdin);
    cout<<"Escriba el nombre del alumno: ";
    cin.getline(alumno1.nombre,20,'\n');
    __fpurge(stdin);
    cout<<"Escriba la edad del alumno: ";
    cin>>alumno1.edad;
    __fpurge(stdin);
    cout<<"Escriba el sexo del alumno: ";
    cin.getline(alumno1.sexo,20,'\n');
    __fpurge(stdin);
    cout<<"Escriba la calificacion 1 del alumno: ";
    cin>>alumno1.prom_alu.calif1;
    __fpurge(stdin);
    cout<<"Escriba la calificacion 2 del alumno: ";
    cin>>alumno1.prom_alu.calif2;
    __fpurge(stdin);
    cout<<"Escriba la calificacion 3 del alumno: ";
    cin>>alumno1.prom_alu.calif3;
    cout<<"\n";

    //calcular promedio

    alumno1.prom_alu.prom=(alumno1.prom_alu.calif1+alumno1.prom_alu.calif2+alumno1.prom_alu.calif3)/3;

    //imprimir datos

    cout<<"Nombre del alumno: "<<alumno1.nombre<<"\n";
    cout<<"Edad del alumno: "<<alumno1.edad<<"\n";
    cout<<"Sexo del alumno: "<<alumno1.sexo<<"\n";
    cout<<"Calif 1: "<<alumno1.prom_alu.calif1<<"\n";
    cout<<"Calif 2: "<<alumno1.prom_alu.calif2<<"\n";
    cout<<"calif 3: "<<alumno1.prom_alu.calif3<<"\n";
    cout<<"Promedio del alumno: "<<alumno1.prom_alu.prom<<"\n";

    return 0;
}