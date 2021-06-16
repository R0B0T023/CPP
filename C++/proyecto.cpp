/*Desarrolla un programa en el que se pida cuántos alumnos se quiere capturar y por medio de asignaciones de memoria 
se guarden sus datos (nombre completo, grado, grupo, calificación). 

Una vez capturados, mostrar un menú en el que se pueda editar alguno de los alumnos y/o mostrar sus calificaciones.*/

#include<iostream>
#include<stdio.h>
#include <stdio_ext.h>

using namespace std;

int main()
{
    int n, op, i;

    float suma=0;
    
    string nombre[50];
    string *apt_nombre;
    apt_nombre=nombre;

    string grado[50];
    string *apt_grado;
    apt_grado=grado;

    string grupo[50];
    string *apt_grupo;
    apt_grupo=grupo;

    float calif[50];
    float *apt_calif;
    apt_calif=calif;

    float promedio;
    float *prom;

    system("clear");
    cout<<"Cuantos alumnos quiere capturar?:";
    cin>>n;

    system("clear");
    cout<<"\tBienvenido.\n\n";
    
    opciones:
    cout<<"\tOPCIONES:\n";
    cout<<"1) Editar Alumnos.\n";
    cout<<"2) Ver Alumnos y Calificaciones.\n";
    cout<<"3) Mostrar Promedios.\n";
    cout<<"Seleccione una opcion: ";
    cin>>op;

    switch(op)
    {
        case 1:
            {
                system("clear");
                cout<<"\tEditar Alumnos.\n\n";

                for(i=0; i<n; i++)
                {
                    __fpurge(stdin);
                    cout<<"\nDame el nombre del alumno "<<i<<": ";
                    cin>>nombre[i];

                    __fpurge(stdin);
                    cout<<"Dame el grado del alumno "<<i<<": ";
                    cin>>grado[i];

                    __fpurge(stdin);
                    cout<<"Dame el grupo del alumno "<<i<<": ";
                    cin>>grupo[i];

                    __fpurge(stdin);
                    cout<<"Dame la calificacion del alumno "<<i<<": ";
                    cin>>calif[i];
                }
                cout<<"\n";
                goto opciones;
            }
        break;

        case 2:
            {
                system("clear");
                cout<<"\tVer Alumnos y Calificaciones.\n\n";

                for(i=0;i<n;i++)
                {
                    cout<<"Nombre del alumno.           Grado.          Grupo.          Calif.\n";
                    cout<<*apt_nombre++<<"              "<<*apt_grado++<<"          "<<*apt_grupo++<<"          "<<*apt_calif++<<"\n";
                }
                goto opciones;
            }
        break;

        case 3:
            {
                system("clear");
                cout<<"\tMostrar Promedio.\n\n";
                
                for(i=0;i<n;i++)
                {
                    suma+=calif[i];
                }
                
                cout<<"Operacion: \n";
                cout<<suma<<" / "<<n<<"\n\n";
                cout<<"Promedio Total de los alumnos = "<<suma/n<<"\n\n";

                goto opciones;
            }
        break;
    }

    return 0;
}
