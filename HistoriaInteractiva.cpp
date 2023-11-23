#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	char nombre[15];
	char eleccion;
	int vida = 100;
	 
	cout << "***********BIENVENIDO AL APOCALIPSIS ZOMBIE***********" << endl;
	cout << "Ingresa un nombre de usuario (Maximo 15 caracteres)" << endl;
	cin.getline(nombre, 15, '\n');
	cout << endl;
	
	
	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
	cout << "*Llamada entrante*...\n Hola " << nombre << " me alegro de que por fin hayas contestado, ¿Como estas? Es una completa pesadilla lo que esta pasando afuera. ";
	cout << "La gente esta enloqueciendo, son muy violentos y nadie sabe que es lo que pasa, el gobierno solo ha declarado estado de emergencia y toque de queda, ";
	cout << "pero la gente lo esta ignorando. Yo tratare de llegar a un lugar seguro y esperare a que todo pase, tu trata de hacer lo mismo." << endl;
	cout << "Cuidate mucho amigo, ¡Suerte!" << endl;
	
	do{
		cout << "\n¿Que quieres hacer?" << endl;
	
		cout <<  "1. Mirar por la ventana" << endl;
		cout <<  "2. Ir a buscar suministros" << endl;
		cout <<  "3. Bloquear las entradas de tu casa" << endl;
		cout <<  "4. Dormir" << endl;
		cout <<  "5. Cerrar" << endl;
		cin >> eleccion;
	
		switch (eleccion){
			case '1' : 
				cout << "Miras a lo lejos el caos que se esta creando, todos tratan de escapar de la ciudad, pero logras ver que la casa de tu vecino esta abierta..." << endl;
				
				do{
					cout << "\n¿Que quieres hacer?" << endl;
	
					cout <<  "1. Bajar por tu auto y salir" << endl;
					cout <<  "2. Salir caminando" << endl;
					cout <<  "3. Ir con tu vecino" << endl;
					cout <<  "4. Cerrar" << endl;
					cin >> eleccion;
	
					switch (eleccion){
						case '1' : 
							cout << "Vas rumbo a la cochera, pero escuchas un ruido extrano salir de ahi..." << endl;
							
							do{
								cout << "\n¿Que quieres hacer?" << endl;
	
								cout <<  "1. Entrar cuidadosamente" << endl;
								cout <<  "2. Buscar un objeto que sirva como arma" << endl;
								cout <<  "3. Olvidar el carro y salir caminando" << endl;
								cout <<  "4. Cerrar" << endl;
								cin >> eleccion;
	
								switch (eleccion){
									case '1' : 
										cout << "Al entrar ves que la puerta de la cochera esta rota y hay una persona extraña que te empieza a atacar..." << endl;
							
										do{
											cout << "\n¿Que quieres hacer?" << endl;
	
											cout <<  "1. Atacarla con tus punos" << endl;
											cout <<  "2. Tratar de evitarla y entrar al carro" << endl;
											cout <<  "3. Tratar de hablar con ella" << endl;
											cout <<  "4. Cerrar" << endl;
											cin >> eleccion;
	
											switch (eleccion){
											case '1' : 
												cout << "Miras a lo lejos el caos que se esta creando, todos tratan de escapar de la ciudad, pero logras ver que la casa de tu vecino esta abierta..." << endl;
							
				
												break;
											case '2' : 
												cout << "Mirar por la ventana";
												break;
											case '3' :
												cout << "Mirar por la ventana";
												break;
											case '4' : 
												cout << "Salir";
												break;
											default :
												cout << "La opcion que elejiste no existe.";
												break;
											}
										} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4');
				
										break;
									case '2' : 
										cout << "Mirar por la ventana";
										break;
									case '3' :
										cout << "Mirar por la ventana";
										break;
									case '4' : 
										cout << "Salir";
										break;
									default :
										cout << "La opcion que elejiste no existe.";
										break;
								}
							} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4');
							
							break;
						case '2' : 
							cout << "Mirar por la ventana";
							break;
						case '3' :
							cout << "Mirar por la ventana";
							break;
						case '4' : 
							cout << "Salir";
							break;
						default :
							cout << "La opcion que elejiste no existe.";
							break;
					}
				} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4');
				
				break;
			case '2' : 
				cout << "Mirar por la ventana";
				break;
			case '3' :
				cout << "Mirar por la ventana";
				break;
			case '4' : 
				cout << "Mirar por la ventana";
				break;
			case '5' : 
				cout << "Saliendo del programa";
				break;
			default :
				cout << "La opcion que elejiste no existe.";
				break;
		}
	} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4' && eleccion != '5');
	
	
	
	
	return 0;
}
