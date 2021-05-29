#include <iostream>
#include <stdio.h>

using namespace std;

int ind(int a, int b, int c, int d, int e)
{
    int tot_per;
    tot_per=a+b+c+d+e;
    return tot_per;
}

int tot(int total[], const int tam)
{
    int cuent_tot;
    int a, b, c, d, e;

    cuent_tot=a+b+c+d+e;
    return cuent_tot;
}


int main() 
{
	string usuario,contra,u,c;
	int opc,mesa,personas,npersona,opt,i;
    system("clear");
	cout<<"Configura tu usuario y password: \n";
    cout<<"\nUsuario: ";
	cin>>usuario;
    cout<<"Password: ";
	cin>>contra;
	system("clear");
	cout<<"Ingresa tu usuario y password\n";
    cout<<"\nUsuario: ";
	cin>>u;
    cout<<"Password: ";
	cin>>c;
	if (u==usuario && c==contra)
	{
        system("clear");
		cout<<"Escribe el numero de mesa: ";
		cin>>mesa;
		cout<<"\nCuantas personas hay en la mesa?: ";
		cin>>personas;
        int const tam = personas * 5;
		int totalpersona[tam];

		string pt[personas];
		string st[personas];
		string pf[personas];
		string pos[personas];
		string beb[personas];
		int cpt[personas];
		int cst[personas];
		int cpf[personas];
		int cpos[personas];
		int cbeb[personas];
		for (i=0;i<=personas;i++)
		{
			cpt[i]=0;
			cst[i]=0;
			cpf[i]=0;
			cpos[i]=0;
			cbeb[i]=0;
		}
		menuprincipal:
		system("clear");
		cout<<"Digite la persona a capturar o escriba 0 para mostrar la cuenta: ";
		cin>>npersona;
		if (npersona==0)
		{
			cout<<"\nCuenta por persona\n";
			for (i=0;i<personas;i++)
			{
                cout<<"\n\n";
			    cout<<"Persona "<<i+1<<endl;
			    cout<<"Primer tiempo: "<<pt[i]<<" $"<<cpt[i]<<endl;
			    cout<<"Segundo tiempo: "<<st[i]<<" $"<<cst[i]<<endl;
			    cout<<"Plato fuerte: "<<pf[i]<<" $"<<cpf[i]<<endl;
			    cout<<"Postres: "<<pos[i]<<" $"<<cpos[i]<<endl;
			    cout<<"Bebidas: "<<beb[i]<<" $"<<cbeb[i]<<endl;
                cout<<"Total $"<<ind(cpt[i],cst[i],cpf[i],cpos[i],cbeb[i]);
			}

            cout << endl << "\nCuenta total" << endl;        
            for (int i = 0; i < personas; i++) 
            {
                cout << "Persona " << i + 1 << endl;
                totalpersona[i] = cpt[i];
                totalpersona[i] = cst[i];
                totalpersona[i] = cpf[i];
                totalpersona[i] = cpos[i];
                totalpersona[i] = cbeb[i];
                cout << "Total $" << ind(cpt[i], cst[i], cpf[i], cpos[i], cbeb[i]);
                ind(cpt[i], cst[i], cpf[i], cpos[i], cbeb[i]);
                cout << endl;   
            }



		}
		else if (npersona<=personas)
	    {
		    npersona = npersona-1;
		    cout<<"\nMenu principal\n";
		    cout<<"1)Primer tiempo\n";
		    cout<<"2)Segundo tiempo\n";
		    cout<<"3)Plato fuerte\n";
		    cout<<"4)Postres\n";
		    cout<<"5)Bebidas\n";
            cout<<"Seleccione su platillo: ";
		    cin>>opc;
		    switch (opc)
		    {
		        case 1:
                {
                    if (cpt[npersona]==0)
                    {
                        cout<<"\nPrimer tiempo\n";
                        cout<<"1)Sopa\n";
                        cout<<"2)Consome\n";
                        cout<<"Opcion: ";
                        cin>>opt;
                        if (opt == 1)
                        {
                            pt[npersona] = "Sopa";
                            cpt[npersona] = 20;
                        }
                        else if (opt ==2)
                        {
                            pt[npersona] = "Consome";
                            cpt[npersona] = 20;		
                        }	
                    }
                    else
                    {
                        cout<<"\nYa habia capturado el primer tiempo\n";
                    }
                }
                break;
                
                case 2:
                {
                    if (cst[npersona]==0)
                    {
                        cout<<"\nSegundo tiempo\n";
                        cout<<"1)Arroz\n";
                        cout<<"2)Espagueti\n";
                        cout<<"Opcion: ";
                        cin>>opt;
                        if (opt == 1)
                        {
                            st[npersona] = "Arroz";
                            cst[npersona] = 20;
                        }	
                        else if (opt ==2)
                        {
                            st[npersona] = "Espagueti";
                            cst[npersona] = 20;
                        }	
                    }
                    else
                    {
                        cout<<"\nYa se habia capturado el segundo tiempo de esta persona\n";
                    }
                }
                break;
                
                case 3:
                {
                    if (cpf[npersona]==0)
                    {
                        cout<<"\nPrimer tiempo\n";
                        cout<<"1)Enchiladas\n";
                        cout<<"2)Pozole\n";
                        cout<<"Opcion: ";
                        cin>>opt;
                        if (opt == 1)
                        {
                            pf[npersona] = "Enchiladas";
                            cpf[npersona] = 30;
                        }   	
                        else if (opt ==2)
                        {
                            pf[npersona] = "Pozole";
                            cpf[npersona] = 30;	
                        }	
                    }
                    else
                    {
                        cout<<"\nYa se habia capturado el plato fuerte de esta persona \n";
                    }
                }
                break;
                
                case 4:
                {
                    if (cpos[npersona]==0)
                    {		
                        cout<<"\nPostres\n";
                        cout<<"1)Gelatina\n";
                        cout<<"2)Carlota\n";
                        cout<<"Opcion: ";
                        cin>>opt;
                        if (opt == 1)
                        {
                            pos[npersona] = "Gelatina";
                            cpos[npersona] = 20;
                        }	
                        else if (opt ==2)
                        {
                            pos[npersona] = "Carlota";
                            cpos[npersona] = 20;	
                        }	
                    }
                    else
                    {
                        cout<<"\nYa se habia elegido postre para esta persona \n";
                    }
                }
                break;
                
                case 5:
                {
                    if (cbeb[npersona]==0)
                    {
                        cout<<"\nBebidas\n";
                        cout<<"1)Agua\n";
                        cout<<"2)Refresco\n";
                        cout<<"Opcion: ";
                        cin>>opt;
                        if (opt == 1)
                        {
                            beb[npersona] = "Agua";
                            cbeb[npersona] = 20;
                        }	
                        else if (opt ==2)
                        {
                            beb[npersona] = "Refresco";
                            cbeb[npersona] = 20;	
                        }	
                    }
                    else
                    {
                        cout<<"\nYa se habia seleccionado bebida para esta persona \n";
                    }
                }
                break;
            }
		    goto menuprincipal;
	    }
	    else
	    {
		    cout<<"\nNo existe ese numero de personas\n";
		    goto menuprincipal;
	    }	
	}
	else
	{
		cout<<"\nError de usuario o  password\n";
	}
	return 0;
}