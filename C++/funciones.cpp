#include<iostream>
#include<iostream>

using namespace std;

int suma (int a, int b)
{
    return a+b;
}

int resta (int a, int b)
{
    return a-b;
}

int multi (int a, int b)
{
    return a*b;
}

int divicion (int a, int b)
{
    return a/b;
}

int main()
{

    int n1, n2, resultado, op;

    cout<<"Dame un numeros: ";
    cin>>n1;
    cout<<"Dame otro numero: ";
    cin>>n2;

    cout<<"\nOPCIONES: \n\n";
    cout<<"1.- Suma\n";
    cout<<"2.- Resta\n";
    cout<<"3.- Multiplicacion\n";
    cout<<"4.- Divicion\n";
    cout<<"\nQue operacion deseas realizar con estos numeros: ";
    cin>>op;

    switch(op)
    {
        case 1:
            resultado=suma(n1,n2);
            cout<<n1<<" + "<<n2<<" = "<<resultado<<"\n";
        break;

        case 2:
            resultado=resta(n1,n2);
            cout<<n1<<" - "<<n2<<" = "<<resultado<<"\n";
        break;

        case 3:
            resultado=multi(n1,n2);
            cout<<n1<<" * "<<n2<<" = "<<resultado<<"\n";
        break;

        case 4:
            resultado=divicion(n1,n2);
            cout<<n1<<" / "<<n2<<" = "<<resultado<<"\n";
        break;        
    }



    return 0;
}

