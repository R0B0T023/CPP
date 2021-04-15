#include<stdio.h>
#include<iostream>
#include<stdio_ext.h>

using namespace std;

    struct inf_dir
    {
        char direccion[30];
        char ciudad[20];
        char provincia[20];
    };

    struct emp
    {
        char nombre[20];
        struct inf_dir dir_emp;
        double salario;
    }
    empleados[2];

int main()
{
    for(int i=0; i<2; i++)
    {
        __fpurge(stdin);
        cout<<"Escriba el nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        __fpurge(stdin);
        cout<<"Escriba la direccion: ";
        cin.getline(empleados[i].dir_emp.direccion,30,'\n');
        __fpurge(stdin);
        cout<<"Escriba la ciudad: ";
        cin.getline(empleados[i].dir_emp.ciudad,20,'\n');
        __fpurge(stdin);
        cout<<"Escriba la provincia: ";
        cin.getline(empleados[i].dir_emp.provincia,20,'\n');
        __fpurge(stdin);
        cout<<"Escriba el salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }

    cout<<"Impresion de datos: \n\n";

    for(int i=0; i<2; i++)
    {
        cout<<"Nombre del empleado: "<<empleados[i].nombre<<"\n";
        cout<<"direccion: "<<empleados[i].dir_emp.direccion<<"\n";
        cout<<"ciudad: "<<empleados[i].dir_emp.ciudad<<"\n";
        cout<<"provincia: "<<empleados[i].dir_emp.provincia<<"\n";
        cout<<"salario: "<<empleados[i].salario<<"\n";
        cout<<"\n";
    }
    
    return 0;
}