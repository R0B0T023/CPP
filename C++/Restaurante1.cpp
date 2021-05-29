// Programa 3 M_Restaurante.cpp 

#include <iostream>
#include <stdio.h>

using namespace std;

int cuenta_persona(int pt, int st, int pf, int pos, int beb){
	int total_personas;
	
	total_personas = pt + st + pf + pos + beb;
	return total_personas;
}

int cuenta_total(int total[], const int tam){
	int cuentatotal;
	int pt, st, pf, pos, beb;
	
	cuentatotal = pt + st + pf + pos + beb;
    return cuentatotal;
}

int main()
{
    string usuario, password, u, p;
    int num_mesa, num_personas, num_persona;
    int opc, opc1, opc2, opc3, opc4, opc5, opc6, opc7, opc8, opc9, opc10, opc11;
    
    cout << "Configura tu usuario y password" << endl;
    cin >> usuario;
    cin >> password;
    system("cls");

    cout << "Ingresa tu usuario y password" << endl;
    cin >> u;
    cin >> p;

    if (u == usuario && p == password) {

        cout << "Escribe el numero de mesa en la que desea sentarse: ";
        cin >> num_mesa;
        cout << "Cuantas personas son las que estaran en la mesa?: ";
        cin >> num_personas;
		int const tam = num_persona * 5;
		int totalpersona[tam];
		
        string primer_tiempo[num_personas];
        string segundo_tiempo[num_personas];
        string plato_fuerte[num_personas];
        string postres[num_personas];
        string bebidas[num_personas];

        int costo_primertiempo[num_personas];
        int costo_segundotiempo[num_personas];
        int costo_platofuerte[num_personas];
        int costo_postres[num_personas];
        int costo_bebidas[num_personas];
        
        for (int i = 0; i <= num_personas; i++) {
        	        
        	costo_primertiempo[i] = 0;
        	costo_segundotiempo[i] = 0;
        	costo_platofuerte[i] = 0;
        	costo_bebidas[i] = 0;
        	costo_postres[i] = 0;

		}

    menuprincipal:
                
		//system("cls");
		//system("pause");
		
        cout << "Digite la persona que va a ordenar o escriba 0 para mostrar la cuenta: ";
        cin>>num_persona;

        if (num_persona == 0) {
        				
            cout << "Cuenta por persona\n";

            for (int i = 0; i < num_personas; i++) {

                cout << "Persona " << i + 1 << endl;
                cout << "Primer tiempo: " << primer_tiempo[i] << " $" << costo_primertiempo[i] << endl;
                cout << "Segundo tiempo: " << segundo_tiempo[i] << " $" << costo_segundotiempo[i] << endl;
                cout << "Plato fuerte: " << plato_fuerte[i] << " $" << costo_platofuerte[i] << endl;
                cout << "Postres: " << postres[i] << " $" << costo_postres[i] << endl;
                cout << "Bebidas: " << bebidas[i] << " $" << costo_bebidas[i] << endl;
                cout << "Total $" << cuenta_persona(costo_primertiempo[i], costo_segundotiempo[i], costo_platofuerte[i], costo_postres[i], costo_bebidas[i]);
                cuenta_persona(costo_primertiempo[i], costo_segundotiempo[i], costo_platofuerte[i], costo_postres[i], costo_bebidas[i]);
                cout << endl;
                
               }
               
               cout << endl << "Cuenta total" << endl;
                    
               for (int i = 0; i < num_personas; i++) {

                   cout << "Persona " << i + 1 << endl;
                   totalpersona[i] = costo_primertiempo[i];
                   totalpersona[i] = costo_segundotiempo[i];
                   totalpersona[i] = costo_platofuerte[i];
                   totalpersona[i] = costo_postres[i];
                   totalpersona[i] = costo_bebidas[i];
                   cout << "Total $" << cuenta_persona(costo_primertiempo[i], costo_segundotiempo[i], costo_platofuerte[i], costo_postres[i], costo_bebidas[i]);
                   cuenta_persona(costo_primertiempo[i], costo_segundotiempo[i], costo_platofuerte[i], costo_postres[i], costo_bebidas[i]);
                   cout << endl;
                   
            }
        }

        else if (num_persona <= num_personas) {
                                        	
            if (num_persona <= num_personas) {

                num_persona = num_persona - 1;

                cout << "Menu" << endl;
                cout << "1) Primer Tiempo" << endl;
                cout << "2) Segundo Tiempo" << endl;
                cout << "3) Plato Fuerte" << endl;
                cout << "4) Postres" << endl;
                cout << "5) Bebidas" << endl;
                cout << "Seleccione que es lo que desea ordenar: ";
                cin >> opc;

                switch (opc) {

                case 1:

                    if (costo_primertiempo[num_persona] == 0) {

                        cout << "Primer Tiempo" << endl;
                        cout << "1)Sopa" << endl;
                        cout << "2)Crema" << endl;
                        cout << "3)Consome" << endl;
		        cout << "Seleccione que es lo que desea ordenar: ";
                        cin >> opc1;

                        switch (opc1) {

                        case 1:

                            primer_tiempo[num_persona] = "Sopa";
                            costo_primertiempo[num_persona] = 20;
                            break;

                        case 2:

                            cout << "La opcion que elegiste fue cremas" << endl;
                            cout << "Cremas disponibles" << endl;
                            cout << "1) Crema de elote" << endl;
                            cout << "2) Crema de champinones" << endl;
                            cout << "3) Crema de zanahoria" << endl;
    			    cout << "Seleccione que es lo que desea ordenar: ";
                            cin >> opc2;

                            switch (opc2) {

                            case 1:

                                primer_tiempo[num_persona] = "Crema de Elote" << endl;
                                costo_primertiempo[num_persona] = 25;
                                break;

                            case 2:

                                primer_tiempo[num_persona] = "Crema de Champiniones" << endl;
                                costo_primertiempo[num_persona] = 25;
                                break;

                            case 3:

                                primer_tiempo[num_persona] = "Crema de Zanahoria" << endl;
                                costo_primertiempo[num_persona] = 25;
                                break;
                            }//opc2

                        case 3:

                            primer_tiempo[num_persona] = "Consome" << endl;
                            costo_primertiempo[num_persona] = 20;
                            break;

                            break;

                        }//opc1
                        break;
                    }
                    else {
                        cout << "Ya habia capturado el primer tiempo" << endl;
                    }
                    break;
                    
                case 2:

                    if (costo_segundotiempo[num_persona] == 0) {

                        cout << "Segundo Tiempo" << endl;
                        cout << "1) Ensalada" << endl;
                        cout << "2) Fruta" << endl;
			cout << "Seleccione que es lo que desea ordenar: ";
                        cin >> opc3;

                        switch (opc3) {

                        case 1:

                            cout << "1) Ensalada de Pollo" << endl;
                            cout << "2) Ensalada del Cheff" << endl;
                            cout << "Seleccione que es lo que desea ordenar: ";
                            cin >> opc4;

                            switch (opc4) {

                            case 1:

                                segundo_tiempo[num_persona] = "Ensalada de Pollo" << endl;
                                costo_segundotiempo[num_persona] = 30;
                                break;

                            case 2:

                                segundo_tiempo[num_persona] = "Ensalada del Cheff" << endl;
                                costo_segundotiempo[num_persona] = 35;
                                break;
                            }
                            break;

                        case 2:

                            cout << "La opcion que elegiste fue: Frutas" << endl;
                            cout << "Frutas" << endl;
                            cout << "1)Melon" << endl;
                            cout << "2)Sandia" << endl;
                            cout << "3)Papaya" << endl;
                            cout << "Seleccione que es lo que desea ordenar: ";
                            cin >> opc5;

                            switch (opc5) {

                            case 1:

                                segundo_tiempo[num_persona] = "Melon" << endl;
                                costo_segundotiempo[num_persona] = 30;
                                break;

                            case 2:

                                segundo_tiempo[num_persona] = "Sandia" << endl;
                                costo_segundotiempo[num_persona] = 30;
                                break;

                            case 3:

                                segundo_tiempo[num_persona] = "Papaya" << endl;
                                costo_segundotiempo[num_persona] = 30;
                                break;
                            }
                            break;
                        }
                        break;
                    }
                    else {
                        cout << "Ya habia capturado el segundo tiempo" << endl;
                    }
                    break;

                case 3:

                    if (costo_platofuerte[num_persona] == 0) {

                        cout << "Plato Fuerte" << endl;
                        cout << "1) Carne Asada" << endl;
                        cout << "2) Pollo con Ensalada" << endl;
                        cout << "3) Carne con Coca-Cola" << endl;  
		        cout << "Seleccione que es lo que desea ordenar: ";
                        cin >> opc6;
                        
                        switch (opc6) {

                        case 1:

                            plato_fuerte[num_persona] = "Carne Asada" << endl;
                            costo_platofuerte[num_persona] = 120;
                            break;

                        case 2:

                            cout << "La opcion que elejiste fue: Pollo con Ensalada" << endl;
                            cout << "1) Pollo con ensalada de Lechuga con Zanahoria" << endl;
                            cout << "2) Pollo con ensalada de Lechuga con Jamon" << endl;
                            cout << "Seleccione que es lo que desea ordenar: ";
                            cin >> opc7;

                            switch (opc7) {

                            case 1:

                                plato_fuerte[num_persona] = "Pollo con Ensalada de Lechuga con Zanahoria" << endl;
                                costo_platofuerte[num_persona] = 90;
                                break;

                            case 2:

                                plato_fuerte[num_persona] = "Pollo con Ensalada de Lechuga con Jamon" << endl;
                                costo_platofuerte[num_persona] = 75;
                                break;
                            }
                            break;

                        case 3:

                            plato_fuerte[num_persona] = "Carne con Coca-Cola" << endl;
                            costo_platofuerte[num_persona] = 100;
                            break;
                        }
                        break;
                    }
                    else {
                        cout << "Ya habia capturado el plato fuerte" << endl;
                    }
                    break;

                case 4:

                    if (costo_postres[num_persona] == 0) {

                        cout << "Postres" << endl;
                        cout << "1) Flanes" << endl;
                        cout << "2) Gelatinas" << endl;
                        cout << "Seleccione que es lo que desea ordenar: ";
                        cin >> opc8;

                        switch (opc8) {
                        
			case 1:
                        		

                            cout << "Flanes" << endl;
                            cout << "1) Flan Napolitano" << endl;
                            cout << "2) Flan con Zarzamora" << endl;
                            cout << "Seleccione que es lo que desea ordenar: ";
                            cin >> opc9;

                            switch (opc9) {

                            case 1:
                            	
                                postres[num_persona] = "Flan Napolitano" << endl;
                                costo_postres[num_persona] = 25;
                                break;

                            case 2:

                                postres[num_persona] = "Flan de Zarzamoras" << endl;
                                costo_postres[num_persona] = 30;
                                break;
                            }
                            break;

                        case 2:

                            cout << "Gelatinas" << endl;
                            cout << "1) Gelatina de Mango" << endl;
                            cout << "2) Gelatina de Fresa" << endl;
                            cout << "Seleccione que es lo que desea ordenar: ";
                            cin >> opc10;

                            switch (opc10) {

                            case 1:
                            
                                postres[num_persona] = "Gelatina de Mango" << endl;
                                costo_postres[num_persona] = 15;
                                break;

                            case 2:

                                postres[num_persona] = "Gelatina de Fresa" << endl;
                                costo_postres[num_persona] = 17;
                                break;
                            }
                            break;
                        }
                        break;
                    }
                    else {
                        cout << "Ya habia capturado los postres" << endl;
                    }
                    break;

                case 5:

                    if (costo_bebidas[num_persona] == 0) {

                        cout << "Bebidas" << endl;
                        cout << "1) Cerveza" << endl;
                        cout << "2) Tequila" << endl;
                        cout << "Seleccione que es lo que desea ordenar: ";
                        cin >> opc11;

                        switch (opc11) {

                        case 1:

                            bebidas[num_persona] = "Cerveza" << endñ;
                            costo_bebidas[num_persona] = 45;
                            break;

                        case 2:

                            bebidas[num_persona] = "Tequila" << endl;
                            costo_bebidas[num_persona] = 50;
                            break;
                        }
                        break;
                    }
                    else {
                        cout << "Ya habia capturado las bebidas" << endl;
                    }
                    break;

                }//opc
                
                goto menuprincipal;
            }

		}else{
			cout<<"No existe ese numero de personas";
		}
        
    }
    else {
        cout << "Error de usuario o password" << endl;
    }
}
