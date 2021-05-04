#include <iostream>

#include <stdio.h>

using namespace std;

int main()

{

int articulo, cuanto, precio[5], cantidad[5], totales, total = 0, menu, i = 0, op = 0;

string nombre[5];

for (i = 0; i < 5; i++) 
{
    system("clear");
    cout << "Ingrese el nombre del articulo [" << i << "]: ";
    cin >> nombre[i];
    cout << "Ingrese el precio del articulo [" << i << "]: $";
    cin >> precio[i];

    cout << "Ingrese la cantidad del articulo [" << i << "]: ";

    cin >> cantidad[i];

}

system("clear");

do 
{

cout << "1) Calcular Totales de los Articulos: \n";

cout << "2) Calcular Total del Articulo: \n";

cout << "Seleccione la opcion que desea realizar: ";

cin >> menu;

switch (menu) 
{

case 1:

system("clear");

cout << "Num | Nombre Mercancia | Existencias | Precio | Total\n";

for (i = 0; i < 5; i++) 
{

cout << i <<" | " << nombre[i]<<" | " << cantidad[i]<<" | " << "$" << precio[i]<<"| " << "$" << cantidad[i] * precio[i] << "\n";

total = total + (cantidad[i] * precio[i]);

}

cout << "El total de los articulos es de $" << total << "\n\n";

break;

case 2:

system("clear");

cout << "\t\t\tCalcular a pagar por articulo \n";

cout << "Num | Nombre del Articulo | Existencias | Precio\n";

for (i = 0; i < 5; i++) 
{

cout << i <<" | " << nombre[i]<<"|" << cantidad[i] << " | " << precio[i] << " | " << cantidad[i]* precio[i] << "\n";
}
cout << "\nCual articulo quieres?: ";

cin >> articulo;

cout << "\nCuantos articulos quieres?: ";

cin >> cuanto;

totales = precio[articulo]* cuanto;

if (cantidad[articulo] < cuanto) 
{

cout << "No hay existencia suficiente para surtir su pedido" << "\n";

}

else 
{

cantidad[articulo] = cantidad[articulo]-cuanto;

cout << "El total a pagar de la mercancia [" << i << "] es: $" << totales <<"\n";
}
}
}while(op<2);

return 0;

}
