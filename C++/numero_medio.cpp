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

    if(n1<n2&&n2<n3||n3<n2&&n2<n1)
    {
        cout<<"El numero de enmedio es: "<<n2<<"\n";
    }
    else if(n2<n1&&n1<n3||n3<n1&&n1<n2)
    {
        cout<<"El numero de enmedio es: "<<n1<<"\n";
    }
    else
    {
        cout<<"el numero de enmedio es: "<<n3<<"\n";
    }


    return 0;
}