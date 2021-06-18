#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int opc;
    system("clear");
    cout<<"Seleccione una opcion: \n\n";

    cout<<"1.- Pila\n";
    cout<<"2.- Cola\n";
    cout<<"Opcion: ";
    cin>>opc;

    switch(opc)
    {
        case 1:
            {
                int i = 0, j = 0, pila[12], op;

                do 
                {

                    cout << "1) Ingresar" << endl;
                    cout << "2) listar" << endl;
                    cout << "0) Salir" << endl;
                    cout << "Selecciona la opcion que desea realizar: ";
                    cin >> op;

                    if (op == 1) 
                    {
                        if (i <= 11) 
                        {

                            cout << "Ingrese un número [" << i << "]: ";
                            cin >> pila[i];
                            i++;
                        }
                    }

                    if (op == 2) 
                    {
                        if (i == 0) 
                        {
                            cout << "Pila Vacia" << endl;
                        }
                        else 
                        {
                            for (j = 0; j < i; j++) 
                            {
                                cout << "Los números para la pila son: " << pila[j] << endl;
                            }
                        }
                    }

                    if (op == 0) 
                    {
                        cout << "Fin del programa" << endl;
                        return 0;
                    }
                } while (op < 2 && op == 0);

            }
            break;


        case 2:
            {
                int i = 0, j = 0, cola[12], op;

                do
                {

                    cout << "1) Ingresar" << endl;
                    cout << "2) listar" << endl;
                    cout << "0) Salir" << endl;
                    cout << "Selecciona la opcion que desea realizar: ";
                    cin >> op;

                    if (op == 1) 
                    {
                        if (i < 11) 
                        {

                            cout << "Ingrese un número [" << i << "]: ";
                            cin >> cola[i];
                            i++;
                        }
                    }

                    if (op == 2) 
                    {
                        if (i == 0) 
                        {
                            cout << "Cola Vacia" << endl;
                        }
                        else 
                        {
                            for (j = 0; j < i; j++) 
                            {
                                cout << "Los números para la cola son: " << cola[j] << endl;
                            }
                        }
                    }

                    if (op == 0) 
                    {
                        cout << "Fin del programa" << endl;
                        return 0;
                    }
                }while (op < 2);
            }
            break;
    }
    return 0;
}