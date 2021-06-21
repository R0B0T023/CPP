#include <stdio.h>
#include <iostream>
#include <stdio_ext.h>

using namespace std;

struct promedio
{
    float calif1, calif2, calif3, prom[2];
};

struct alumnos
{
    char nombre[20], sexo[20];
    int edad; 
    struct promedio prom_alu;
} alumno[2];

int main()
{
    system("clear");

    for (int i = 0; i < 2; i++)
    {
        __fpurge(stdin);
        cout << "Escriba el nombre del alumno " << i << ": ";
        cin.getline(alumno[i].nombre, 20, '\n');
        __fpurge(stdin);
        cout << "Escriba la edad del alumno " << i << ": ";
        cin >> alumno[i].edad;
        __fpurge(stdin);
        cout << "Escriba el sexo del alumno " << i << ": ";
        cin.getline(alumno[i].sexo, 20, '\n');
        __fpurge(stdin);
        cout << "Escriba la calificacion 1 del alumno " << i << ": ";
        cin >> alumno[i].prom_alu.calif1;
        __fpurge(stdin);
        cout << "Escriba la calificacion 2 del alumno " << i << ": ";
        cin >> alumno[i].prom_alu.calif2;
        __fpurge(stdin);
        cout << "Escriba la calificacion 3 del alumno " << i << ": ";
        cin >> alumno[i].prom_alu.calif3;
        cout << "\n";
    }
    //calcular promedio

    for (int i = 0; i < 2; i++)
    {
        alumno[i].prom_alu.prom[i] = (alumno[i].prom_alu.calif1 + alumno[i].prom_alu.calif2 + alumno[i].prom_alu.calif3) / 3;
    }

    //imprimir datos

    for (int i = 0; i < 2; i++)
    {
        cout << "Nombre del alumno: " << alumno[i].nombre << "\n";
        cout << "Edad del alumno: " << alumno[i].edad << "\n";
        cout << "Sexo del alumno: " << alumno[i].sexo << "\n";
        cout << "Calif 1: " << alumno[i].prom_alu.calif1 << "\n";
        cout << "Calif 2: " << alumno[i].prom_alu.calif2 << "\n";
        cout << "calif 3: " << alumno[i].prom_alu.calif3 << "\n";
        cout << "Promedio del alumno: " << alumno[i].prom_alu.prom[i] << "\n\n";
    }

    return 0;
}