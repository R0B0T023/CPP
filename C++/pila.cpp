// Programa pila.cpp

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int i = 0, j = 0, pila[12], op;

    do {

        cout << "1) Ingresar" << endl;
        cout << "2) Eliminar" << endl;
        cout << "3) listar" << endl;
        cout << "4) Salir" << endl;
        cout << "Selecciona la opcion que desea realizar: ";
        cin >> op;

        if (op == 1) {
            if (i <= 11) {

                cout << "Ingrese un número [" << i << "]: ";
                cin >> pila[i];
                i++;
            }
        }

        if (op == 2) {

            if (i <= 11) {

                i--;
                
                cout << "El número a eliminar es: " << pila[i] << endl;

                pila[i]=0;
            }
        }

        if (op == 3) {
            if (i == 0) {
                cout << "Pila Vacia" << endl;
            }
            else {
                for (j = 0; j < i; j++) {
                    cout << "Los números para la pila son: " << pila[j] << endl;
                }
            }
        }

        if (op == 4) {

            cout << "Fin del programa" << endl;
        }
    } while (op < 4);
}