/*usuario y contraseña configurables
Menu opciones:ver menu(primer tiempo, segundo tiempo, plato fuerte, postres y bebidas), en que mesa se sienta, que va a pedir
registrar compra y mostrar cuenta a pagar*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    system("cls");
    string mesas;
    int opc,opc2,opc3,opc4,opc5,opc6,opc7,opc8,opc9,opc10,opc11,opc12,opc13,opc14,opc15,total=0, deseo,plato1=0,plato2=0,platof=0,pos=0,be=0;
    string usr, contra, usrr, contrar;
    cout<<"Registro\n\n";

    cout<<"Digite su usuario: ";
    cin>>usrr;
    cout<<"Digite su contraseña: ";
    cin>>contrar;
    system("cls");
    cout<<"Login\n\n";
    registro:
    cout<<"Digite su usuario: ";
    cin>>usr;
    cout<<"Digite su contraseña: ";
    cin>>contra;
    if(usr==usrr && contra==contrar)
    {
cout<<"Las mesas disponibles son: "<<endl;
cout<<"E10 \n E19 \n G2\n H8\n";
cin>>mesas;
    do
    {
    system("cls");
    cout<<"Bienvenido\n";
    cout<<"1)Primer tiempo\n";
    cout<<"2)Segundo tiempo\n";
    cout<<"3)Plato fuerte\n";
    cout<<"4)Postres\n";
    cout<<"5)Bebidas\n";
    cout<<"0)Salir del programa\n";
    cin>>opc;
    if (opc==1)
    {
        cout<<"Elija alguna de las opciones\n";
        cout<<"1)Sopa\n";
        cout<<"2)Crema\n";
        cout<<"3)Consome\n";
        cout<<"4)Pasta\n";
        cout<<"5)Arroz";
        cin>>opc2;
        if (opc2==1)
        {
            cout<<"Eligio sopa y cuesta $20\n";total=total+20; plato1=plato1+20;
        }
        if (opc2==2)
        {
            cout<<"Cremas disponibles\n";
            cout<<"1)Crema de elote\n";
            cout<<"2)Crema de champiñones\n";
            cout<<"3)Crema de zanahoria\n";
            cin>>opc3;
            if (opc3==1)
            {
                cout<<"Eligio crema de elote y cuesta $25\n";total=total+25; plato1=plato1+25;
            }
            if (opc3==2)
            {
                cout<<"Eligio crema de champiñones y cuesta $25\n";total=total+25;plato1=plato1+25;
            }
            if (opc3==3)
            {
                cout<<"Eligio crema de zanahoria y cuesta $25\n";total=total+25;plato1=plato1+25;
            }
        }
		
        if (opc2==3)
        {
            cout<<"Eligio consome y cuesta $20\n";total=total+20;plato1=plato1+20;
        }
        if (opc2==4)
        {
            cout<<"Selecciono pasta y cuesta $30\n";total=total+30;plato1=plato1+30;
        }
        if (opc2==5)
        {
            cout<<"Eligio arroz y cuesta $20\n";total=total+20;plato1=plato1+20;
        }
    }
    if (opc==2)
    {
        cout<<"Segundo tiempo\n";
        cout<<"1)Ensalda\n";
        cout<<"2)Fruta\n";
        cin>>opc4;
        if (opc4==1)
        {
            cout<<"1)Ensalada de pollo\n";
            cout<<"2)Ensalada del cheff\n";
            cin>>opc5;
            if (opc5==1)
            {
                cout<<"Selecciono ensalada de pollo y cuesta $30\n";total=total+30;plato2=plato2+30;
            }
            if (opc5==2)
            {
                cout<<"Selecciono ensalada del cheff y cuesta $35\n";total=total+35;plato2=plato2+35;
            }
        }
        if (opc4==2)
        {
            cout<<"Fruta\n";
            cout<<"1)Melon\n";
            cout<<"2)Sandia\n";
            cout<<"3)Papaya\n";
            cin>>opc6;
            if (opc6==1)
            {
                cout<<"Selecciono melon\n";total=total+5;plato2=plato2+5;
            }
            if (opc6==2)
            {
                cout<<"Selecciono sandia\n"; plato2=plato2+0;
            }
            if (opc6==3)
            {
                cout<<"Selecciono papaya\n";total=total+100;plato2=plato2+100;
            }
        }
    }
    
    if (opc==3)
    {
	
       {
            cout<<"Plato fuerte\n";
            cout<<"1)Chilaquiles";
            cout<<"2)Tacos";
            cin>>opc7;
            if (opc7==1)
            {
            cout<<"1)Chilaquiles verdes\n";
            cout<<"2)Chilaquiles rojos\n";
            cin>>opc8;
            if (opc8==1)
            {
                cout<<"Selecciono Chilaquiles verdes y cuesta $45\n";total=total+45;platof=platof+45;
            }
            if (opc8==2)
            {
                cout<<"Selecciono Chilaquiles rojos y cuesta $45\n";total=total+45;platof=platof+45;
            }
            }
        }
    if (opc7==2)
    {
        cout<<"1)Tacos de al pastor\n";
        cout<<"2)Tacos de res\n";
        cout<<"3)Tacos de maciza";
        cin>>opc9;
        if (opc9==1)
        {
            cout<<"Selecciono Tacos de al pastor y cuesta $20\n";total=total+20;platof=platof+20;
        }
        if (opc9==2)
        {
            cout<<"Selecciono Tacos de res y cuesta $20\n";total=total+20;platof=platof+20;
        }
        if(opc9==3)
        {
            cout<<"Selecciono Tacos de maciza y cuesta $20\n";total=total+20;platof=platof+20;
        }
    }
    }
    
    if(opc==4)
    {
        cout<<"Postres\n";
        cout<<"1)Arroz con leche";
        cout<<"2)Gelatinas";
        cin>>opc10;
        if (opc10==1)
        {
            cout<<"1)Con canela\n";
            cout<<"2)Sin canela\n";
            cin>>opc11;
            if (opc11==1)
            {
                cout<<"Selecciono Arozz con leche con canela y cuesta $15\n";total=total+15;pos=pos+15;
            }
            if (opc11==2)
            {
                cout<<"Selecciono Arroz con leche sin canela y cuesta $15\n";total=total+15;pos=pos+15;
            }
        }
    }
    if (opc10==2)
    {
        cout<<"1)Gelatina de limon\n";
        cout<<"2)Gelatina de chocolate\n";
        cout<<"3)Gelatina de naranja";
        cin>>opc12;
        if (opc12==1)
        {
            cout<<"Selecciono Gelatina de limon y cuesta $10\n";total=total+10;pos=pos+10;
        }
        if (opc12==2)
        {
            cout<<"Selecciono Gelatina de chocolate y cuesta $10\n";total=total+10;pos=pos+10;
        }
        if(opc12==3)
        {
            cout<<"Selecciono Gelatina de naranja y cuesta $10\n";total=total+10;pos=pos+10;
        }
    }
    if(opc==5)
    {
        cout<<"Bebidas\n";
        cout<<"1)Refresco";
        cout<<"2)Agua de sabor";
        cin>>opc13;
        if (opc13==1)
        {
            cout<<"1)Pepsi\n";
            cout<<"2)Coca cola\n";
            cin>>opc14;
        if (opc14==1)
        {be=be+20;total=total+17;
             cout<<"Su Mesa es: "<<mesas<<endl;
             	cout<<"costos por platillos\n";
    	cout<<"primer platillo: "<<plato1<<endl;
    	cout<<"segundo platillo: "<<plato2<<endl;
    	cout<<"platillo fuerte: "<<platof<<endl;
    	cout<<"postres: "<<pos<<endl;
    	cout<<"bebidas: "<<be<<endl;
    	cout<<"tu cuenta es: "<<total<<endl;
        cout<<"Hasta Luego\n";
        }
        if (opc14==2)
        {be=be+17;total=total+17;
            cout<<"Su Mesa es: "<<mesas<<endl;
            	cout<<"costos por platillos\n";
    	cout<<"primer platillo: "<<plato1<<endl;
    	cout<<"segundo platillo: "<<plato2<<endl;
    	cout<<"platillo fuerte: "<<platof<<endl;
    	cout<<"postres: "<<pos<<endl;
    	cout<<"bebidas: "<<be<<endl;
    	cout<<"tu cuenta es: "<<total<<endl;
        cout<<"Hasta Luego\n";
        }
        }
    }
    if (opc13==2)
    {
        cout<<"1)Agua de jamaica\n";
        cout<<"2)Agua de limon\n";
        cout<<"3)Agua de horchata";
        cin>>opc15;
        if (opc15==1)
        {
            total=total+17;be=be+17;
            cout<<"Su Mesa es: "<<mesas<<endl;
            	cout<<"costos por platillos\n";
    	cout<<"primer platillo: "<<plato1<<endl;
    	cout<<"segundo platillo: "<<plato2<<endl;
    	cout<<"platillo fuerte: "<<platof<<endl;
    	cout<<"postres: "<<pos<<endl;
    	cout<<"bebidas: "<<be<<endl;
    	cout<<"tu cuenta es: "<<total<<endl;
        cout<<"Hasta Luego\n";
        }
        if (opc15==2)
        {
            total=total+15;be=be+15;
            cout<<"Su Mesa es: "<<mesas<<endl;
            	cout<<"costos por platillos\n";
    	cout<<"primer platillo: "<<plato1<<endl;
    	cout<<"segundo platillo: "<<plato2<<endl;
    	cout<<"platillo fuerte: "<<platof<<endl;
    	cout<<"postres: "<<pos<<endl;
    	cout<<"bebidas: "<<be<<endl;
    	cout<<"tu cuenta es: "<<total<<endl;
        cout<<"Hasta Luego\n";
        }
        if(opc15==3)
        {
         total=total+17;be=be+17;
            cout<<"Su Mesa es: "<<mesas<<endl;
            	cout<<"costos por platillos\n";
    	cout<<"primer platillo: "<<plato1<<endl;
    	cout<<"segundo platillo: "<<plato2<<endl;
    	cout<<"platillo fuerte: "<<platof<<endl;
    	cout<<"postres: "<<pos<<endl;
    	cout<<"bebidas: "<<be<<endl;
    	cout<<"tu cuenta es: "<<total<<endl;
        cout<<"Hasta Luego\n";
        }
    }
    if(opc==0)
    {
    	cout<<"Su Mesa es: "<<mesas<<endl;
    	cout<<"costos por platillos\n";
    	cout<<"primer platillo: "<<plato1<<endl;
    	cout<<"segundo platillo: "<<plato2<<endl;
    	cout<<"platillo fuerte: "<<platof<<endl;
    	cout<<"postres: "<<pos<<endl;
    	cout<<"bebidas: "<<be<<endl;
    	cout<<"tu cuenta es: "<<total<<endl;
        cout<<"Hasta Luego\n";
        
    }
    }while(opc<5 && opc>=1);
    }
    
    else
    {
    cout<<"Usuario o contrasenia incorrecta\n\n";
    goto registro;
    }
    return 0;
}
