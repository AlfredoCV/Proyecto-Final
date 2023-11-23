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
				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
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
							cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
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
										cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
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
												vida = vida - 20;
												cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
												cout << "Ha sido una dura pelea, pero haz logrado ganar y tienes algunas heridas..." << endl;
												
												do{
													cout << "\n¿Que quieres hacer?" << endl;
	
													cout <<  "1. Subir al carro" << endl;
													cout <<  "2. Buscar un medicamento" << endl;
													cout <<  "3. Bloquear la puerta de la cochera y permancer en casa" << endl;
													cout <<  "4. Cerrar" << endl;
													cin >> eleccion;
	
													switch (eleccion){
														case '1' : 
															cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
															cout << "Que suerte tienes el carro tiene el tanque lleno, pero ahora tienes otro problema ¿A donde vas a ir?..." << endl;
															
															do{
																cout << "\n¿Que quieres hacer?" << endl;
	
																cout <<  "1. Seguir a toda la gente" << endl;
																cout <<  "2. Ir a un supermercado" << endl;
																cout <<  "3. Buscar un refugio" << endl;
																cout <<  "4. Saliendo del programa..." << endl;
																cin >> eleccion;
	
																switch (eleccion){
																	case '1' : 
																		cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																		cout << "En la carretera existe aun mas caos hay demasiado trafico y gritos por doquier, pero al parecer a lo lejos sucede algo..." << endl;
																		
																		do{
																			cout << "\n¿Que quieres hacer?" << endl;
	
																			cout <<  "1. Permanecer en el carro y esperar a avanzar" << endl;
																			cout <<  "2. Salir del carro e ir caminando" << endl;
																			cout <<  "3. Regresar a casa" << endl;
																			cout <<  "4. Cerrar" << endl;
																			cin >> eleccion;
	
																			switch (eleccion){
																				case '1' : 
																					vida = vida + 20;
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Por fin logras avanzar lo suficiente y al parecer la espera ha valido la pena, un reten del ejercito se encarga de eliminar a los zombies y recoge a los supervivientes sanando tus heridas. Ahora estas a salvo." << endl;
																					break;
																				case '2' : 
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Hay muchos zombies al rededor, pero no quieres esperar mas y decides caminar sin importar el riesgo. Ahora ves que un pequeno grupo de infectados se acerca a ti...";
																					
																					do{
																						cout << "\n¿Que quieres hacer?" << endl;
	
																						cout <<  "1. Buscar un objeto que sirva como arma y atacar a los infectados" << endl;
																						cout <<  "2. Correr y tratar de evitar a los infectados" << endl;
																						cout <<  "3. Entrar de nuevo al auto" << endl;
																						cout <<  "4. Cerrar" << endl;
																						cin >> eleccion;
	
																						switch (eleccion){
																							case '1' : 
																								vida = 0;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Parece que no fue una buena idea, el grupo de zombies era mas grande de lo que parecia y te devoraron... Haz muerto..." << endl;
																								break;
																							case '2' : 
																								vida = 5;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Eso estuvo cerca pudiste escapar pero estas muy mal herido, por suerte un grupo de soldados pudieron recogerte y ahora te llevaran a un lugar seguro... Haz sobrevivido";
																								break;
																							case '3' :
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Ha sido una buena idea hubiera sido muy peligroso permanecer afuera. Ahora por fin pudiste avanzar y llegaste con un grupo de soldados que te llevaran a un lugar seguro... Haz sobrevivido";
																								break;
																							case '4' : 
																								cout << "Saliendo del programa...";
																								break;
																							default :
																								cout << "La opcion que elejiste no existe.";
																								break;
																						}
																					} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4');
																					
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
																		cout << "Saliendo del programa...";
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
															cout << "Saliendo del programa";
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
												cout << "Saliendo del programa";
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
										cout << "Saliendo del programa...";
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
							cout << "Saliendo del programa...";
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
				cout << "Saliendo del programa...";
				break;
			default :
				cout << "La opcion que elejiste no existe.";
				break;
		}
	} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4' && eleccion != '5');
	
	
	
	
	return 0;
}
