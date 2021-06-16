#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n1,n2,n3;

    cout<<"Dame el primer numero: ";
    cin>>n1;
    cout<<"Dame el segundo numero: ";
    cin>>n2;
    cout<<"Dame el tercer numero: ";
    cin>>n3;

    if(n1>n2&&n2>n3)
    {
        cout<<"De mayor a menor es: "<<n1<<", "<<n2<<", "<<n3<<"\n";
        cout<<"De menor a mayor es: "<<n3<<", "<<n2<<", "<<n1<<"\n";
    }
    else if(n1>n3&&n3>n2)
    {
        cout<<"De mayor a menor es: "<<n1<<", "<<n3<<", "<<n2<<"\n";
        cout<<"De menor a mayor es: "<<n2<<", "<<n3<<", "<<n1<<"\n";
    }
    else if(n2>n3&&n3>n1)
    {
        cout<<"De mayor a menor es: "<<n2<<", "<<n3<<", "<<n1<<"\n";
        cout<<"De menor a mayor es: "<<n1<<", "<<n3<<", "<<n2<<"\n";
    }
    else if(n3>n1&&n1>n2)
    {
        cout<<"De mayor a menor es: "<<n3<<", "<<n1<<", "<<n2<<"\n";
        cout<<"De menor a mayor es: "<<n2<<", "<<n1<<", "<<n3<<"\n";
    }
    else if(n2>n1&&n1>n3)
    {
        cout<<"De mayor a menor es: "<<n2<<", "<<n1<<", "<<n3<<"\n";
        cout<<"De menor a mayor es: "<<n3<<", "<<n1<<", "<<n2<<"\n";
    }
    else
    {
        cout<<"De mayor a menor es: "<<n3<<", "<<n2<<", "<<n1<<"\n";
        cout<<"De menor a mayor es: "<<n1<<", "<<n2<<", "<<n3<<"\n";
    }



    return 0;
}