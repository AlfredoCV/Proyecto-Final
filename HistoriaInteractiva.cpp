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
												vida = 80;
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
																					vida = 50;
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Ha sido complicado pero lograste regresar y recibiste algo de daño, ahora tienes que decidir...";
																					
																					do{
																						cout << "\n¿Que quieres hacer?" << endl;
	
																						cout <<  "1. Buscar medicamento" << endl;
																						cout <<  "2. Ir al supermercado" << endl;
																						cout <<  "3. Bloquear las entradas de tu casa" << endl;
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
																								cout << "Saliendo del programa...";
																								break;
																							default :
																								cout << "La opcion que elejiste no existe.";
																								break;
																						}
																					} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4');
																					
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
																		cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																		cout << "Vas camino al supermercado y observas que el paso esta bloqueado, pero al parecer no pasa nada mas... ";
																		
																		do{
																			cout << "\n¿Que quieres hacer?" << endl;
	
																			cout <<  "1. Bajar del auto y continuar caminando" << endl;
																			cout <<  "2. Buscar otro camino" << endl;
																			cout <<  "3. Tratar de avanzar con el auto" << endl;
																			cout <<  "4. Cerrar" << endl;
																			cin >> eleccion;
	
																			switch (eleccion){
																				case '1' : 
																					vida = 0;
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Eso no fue una buena idea un grupo de superviventes violentos tendieron una trampa y caiste en ella, lamentablemente no tuvieron piedad... Haz muerto..." << endl;
																					break;
																				case '2' : 
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Ha sido un poco complicado, pero lograste llegar a salvo al supermercado y al parecer se encuentra abierto...";
																					do{
																						cout << "\n¿Que quieres hacer?" << endl;
	
																						cout <<  "1. Entrar al supermercado" << endl;
																						cout <<  "2. Buscar un arma y despues entrar" << endl;
																						cout <<  "3. Regresar" << endl;
																						cout <<  "4. Cerrar" << endl;
																						cin >> eleccion;
	
																						switch (eleccion){
																							case '1' : 
																								vida = 0;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Lamentablemente el supermercado estaba lleno de zombies y no pudiste hacer nada...Haz muerto..." << endl;
																								break;
																							case '2' : 
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Al entrar observas que todo se encuentra lleno de zombies, pero puedes recoger algunos suministros...";
																								do{
																									cout << "\n¿Que quieres hacer?" << endl;
	
																									cout <<  "1. Tratar de recoger los suministros que puedas y salir" << endl;
																									cout <<  "2. Tratar de eliminar a los zombies" << endl;
																									cout <<  "3. Huir del lugar y regresar por donde viniste" << endl;
																									cout <<  "4. Cerrar" << endl;
																									cin >> eleccion;
	
																									switch (eleccion){
																										case '1' : 
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "Tuviste que acabar con algunos zombies y te causaron heridas, sin embargo lograste recolectar algunas cosas. Al salir del lugar ves a un grupo de sobrevivientes que te llevaran a un lugar seguro...Puedes estar tranquilo te haz salvado" << endl;
																											break;
																										case '2' : 
																											vida = 0;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "Los zombies realmente eran demasiados pudiste acabar con unos, pero terminaron por devorarte... Haz muerto...";
																											break;
																										case '3' :
																											vida = 100;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridad y te llevaron a un lugar seguro...Haz sobrevivido";
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
																							case '3' :
																								vida = 100;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridas y te llevaran a un lugar seguro...Haz sobrevivido";
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
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Esta siendo complicado pero poco a poco logras avanzar a costa de hacer mucho ruido, logras ver que enfrente de ti un grupo de sobrevivientes te miran mientras que un grupo de zombies se acercan";
																					do{
																						cout << "\n¿Que quieres hacer?" << endl;
	
																						cout <<  "1. Bajar y hablar con los sobrevivientes" << endl;
																						cout <<  "2. Tratar de huir corriendo" << endl;
																						cout <<  "3. Tratar de huir en carro" << endl;
																						cout <<  "4. Cerrar" << endl;
																						cin >> eleccion;
	
																						switch (eleccion){
																							case '1' : 
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Logras acercarte cuidadosamente y jefe del grupo dialoga contigo, llegan a un acuerdo y ahora puedes estar con ellos...Ahora estas a salvo..." << endl;
																								break;
																							case '2' : 
																								vida = 0;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Oh no... El grupo de zombies llego demasiado rapido y lograron alcanzarte devorandote sin piedad... Haz muerto...";
																								break;
																							case '3' :
																								vida = 45;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Al grupo de sobrevivientes no les gusto eso y te atacaron causandote algunas heridas, pero tuviste suerte y encontraste un refugio en tu huida... Ahora estas a salvo";
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
																		vida = 70;
																		cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																		cout << "La herida que tienes empeoro un poco y perdiste algo de sangre, pero sigues avanzando. Haz llegado a una bifurcación en el camino, ahora tienes que elejir...";
																		do{
																			cout << "\n¿Que quieres hacer?" << endl;
	
																			cout <<  "1. Ir por el lado derecho" << endl;
																			cout <<  "2. Ir por el lado izquierdo" << endl;
																			cout <<  "3. Tratar de curar tu herida" << endl;
																			cout <<  "4. Cerrar" << endl;
																			cin >> eleccion;
	
																			switch (eleccion){
																				case '1' : 
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Parece que ha sido una buena eleccion, el camino esta despejado y observas a lo lejos un refugio tardaras un poco, pero puedes sentirte a salvo... Haz sobrevivido" << endl;
																					break;
																				case '2' : 
																					vida = 5;
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "El camino tenia un poco de obstaculos y una gran orda de zombies logro acercarse dejandote muy mal herido, sin embargo, un grupo de rescate llego justo a tiempo para salvarte. Ellos te llevaran a un lugar seguro y curaran todas tus heridas...Has sobrevivido";
																					break;
																				case '3' :
																					vida = 0;
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Que mala suerte, una gran orda de zombies se acerco a ti mientras curabas tu herida dejandote encerrado en el carro. Poco a poco lograron entrar y no pudiste hacer nada... Haz muerto...";
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
															cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
															cout << "Puede que la herida no sea algo grave, pero es mejor prevenir, recuerdas que tienes algo que puede ayudar en el botiquin que se encuentra en la sala, pero no estas seguro...";
															do{
																cout << "\n¿Que quieres hacer?" << endl;
	
																cout <<  "1. Ir a buscar a la sala" << endl;
																cout <<  "2. Buscar una farmacia" << endl;
																cout <<  "3. Ir a buscar al supermercado" << endl;
																cout <<  "4. Cerrar" << endl;
																cin >> eleccion;
	
																switch (eleccion){
																	case '1' : 
																		cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																		cout << "Mientras caminas a la sala escuchas de nuevo ruidos que provienen de ahi, ya te haz enfrentado una vez, pero tienes que decidir..." << endl;
																		do{
																			cout << "\n¿Que quieres hacer?" << endl;
	
																			cout <<  "1. Entrar y atacar con los punos" << endl;
																			cout <<  "2. Buscar un objeto que sirva como arma" << endl;
																			cout <<  "3. Esperar a que no haya ruido" << endl;
																			cout <<  "4. Cerrar" << endl;
																			cin >> eleccion;
	
																			switch (eleccion){
																				case '1' : 
																					vida = 0;
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Esta vez no tuviste suerte, el ruido era causado por varios zombies que te devoraron...Haz muerto..." << endl;
																					break;
																				case '2' : 
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "No estabas preparado para enfrentar esto aun asi logras conseguir algo...";
																					do{
																						cout << "\n¿Que quieres hacer?" << endl;
	
																						cout <<  "1. Agarrar una martillo" << endl;
																						cout <<  "2. Romper una botella" << endl;
																						cout <<  "3. Agarrar una varilla" << endl;
																						cout <<  "4. Cerrar" << endl;
																						cin >> eleccion;
	
																						switch (eleccion){
																							case '1' : 
																								vida = 50;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "El martillo fue buena opcion apesar de que eran varios zombies pudiste acabar con ellos acosta de algunas heridas, pero ahora puedes tomar el medicamento..." << endl;
																								do{
																									cout << "\n¿Que quieres hacer?" << endl;
	
																									cout <<  "1. Tomar el medicamento y cubrir las entradas de la casa" << endl;
																									cout <<  "2. Tomar el medicamento e ir por suministros al supermercado en carro" << endl;
																									cout <<  "3. No tomar el medicamento" << endl;
																									cout <<  "4. Cerrar" << endl;
																									cin >> eleccion;
	
																									switch (eleccion){
																										case '1' :
																											vida = 100;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "Ahora que tomaste el medicamento te sientes mejor " << endl;
																											break;
																										case '2' : 
																											vida = 100;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "El medicamento hizo que te sintieras mejor, ahora vas camino al supermercado y observas que el paso esta bloqueado, pero al parecer no pasa nada mas... ";
																		
																											do{
																												cout << "\n¿Que quieres hacer?" << endl;
	
																												cout <<  "1. Bajar del auto y continuar caminando" << endl;
																												cout <<  "2. Buscar otro camino" << endl;
																												cout <<  "3. Tratar de avanzar con el auto" << endl;
																												cout <<  "4. Cerrar" << endl;
																												cin >> eleccion;
	
																												switch (eleccion){
																													case '1' : 
																														vida = 0;
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "Eso no fue una buena idea un grupo de superviventes violentos tendieron una trampa y caiste en ella, lamentablemente no tuvieron piedad... Haz muerto..." << endl;
																														break;
																													case '2' : 
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "Ha sido un poco complicado, pero lograste llegar a salvo al supermercado y al parecer se encuentra abierto...";
																														do{
																															cout << "\n¿Que quieres hacer?" << endl;
	
																															cout <<  "1. Entrar al supermercado" << endl;
																															cout <<  "2. Buscar un arma y despues entrar" << endl;
																															cout <<  "3. Regresar" << endl;
																															cout <<  "4. Cerrar" << endl;
																															cin >> eleccion;
	
																															switch (eleccion){
																																case '1' : 
																																	vida = 0;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Lamentablemente el supermercado estaba lleno de zombies y no pudiste hacer nada...Haz muerto..." << endl;
																																	break;
																																case '2' : 
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Al entrar observas que todo se encuentra lleno de zombies, pero puedes recoger algunos suministros...";
																																	do{
																																		cout << "\n¿Que quieres hacer?" << endl;
	
																																		cout <<  "1. Tratar de recoger los suministros que puedas y salir" << endl;
																																		cout <<  "2. Tratar de eliminar a los zombies" << endl;
																																		cout <<  "3. Huir del lugar y regresar por donde viniste" << endl;
																																		cout <<  "4. Cerrar" << endl;
																																		cin >> eleccion;
	
																																		switch (eleccion){
																																			case '1' : 
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Tuviste que acabar con algunos zombies y te causaron heridas, sin embargo lograste recolectar algunas cosas. Al salir del lugar ves a un grupo de sobrevivientes que te llevaran a un lugar seguro...Puedes estar tranquilo te haz salvado" << endl;
																																				break;
																																			case '2' : 
																																				vida = 0;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Los zombies realmente eran demasiados pudiste acabar con unos, pero terminaron por devorarte... Haz muerto...";
																																				break;
																																			case '3' :
																																				vida = 100;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridad y te llevaron a un lugar seguro...Haz sobrevivido";
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
																																case '3' :
																																	vida = 100;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridas y te llevaran a un lugar seguro...Haz sobrevivido";
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
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "Esta siendo complicado pero poco a poco logras avanzar a costa de hacer mucho ruido, logras ver que enfrente de ti un grupo de sobrevivientes te miran mientras que un grupo de zombies se acercan";
																														do{
																															cout << "\n¿Que quieres hacer?" << endl;
	
																															cout <<  "1. Bajar y hablar con los sobrevivientes" << endl;
																															cout <<  "2. Tratar de huir corriendo" << endl;
																															cout <<  "3. Tratar de huir en carro" << endl;
																															cout <<  "4. Cerrar" << endl;
																															cin >> eleccion;
	
																															switch (eleccion){
																																case '1' : 
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Logras acercarte cuidadosamente y jefe del grupo dialoga contigo, llegan a un acuerdo y ahora puedes estar con ellos...Ahora estas a salvo..." << endl;
																																	break;
																																case '2' : 
																																	vida = 0;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Oh no... El grupo de zombies llego demasiado rapido y lograron alcanzarte devorandote sin piedad... Haz muerto...";
																																	break;
																																case '3' :
																																	vida = 45;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Al grupo de sobrevivientes no les gusto eso y te atacaron causandote algunas heridas, pero tuviste suerte y encontraste un refugio en tu huida... Ahora estas a salvo";
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
																											vida = 0;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "No sabias lo que las heridas podian causar y poco a poco comenzaron a hacerte sentir mal, tal vez tomar algo pudo ayudar ahora ya es muy tarde... Haz muerto...";
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
																								vida = 0;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Eso no fue una buena idea la botella te corto y atrajo a los zombies y no pudiste hacer nada con tu mano herida... Haz muerto...";
																								break;
																							case '3' :
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Buena decision, el tamaño de la varilla te permitio atacar sin acercarte demasiado. Ahora puedes tomar el medicamento...";
																								do{
																									cout << "\n¿Que quieres hacer?" << endl;
	
																									cout <<  "1. Tomar el medicamento y bloquear las entradas de la casa" << endl;
																									cout <<  "2. Tomar el medicamento e ir a buscar suministros al supermercado" << endl;
																									cout <<  "3. No tomar el medicamento" << endl;
																									cout <<  "4. Cerrar" << endl;
																									cin >> eleccion;
	
																									switch (eleccion){
																										case '1' : 
																											cout << "Miras a lo lejos el caos que se esta creando, todos tratan de escapar de la ciudad, pero logras ver que la casa de tu vecino esta abierta..." << endl;
							
				
																											break;
																										case '2' : 
																											vida = 100;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "El medicamento hizo que te sintieras mejor, ahora vas camino al supermercado y observas que el paso esta bloqueado, pero al parecer no pasa nada mas... ";
																		
																											do{
																												cout << "\n¿Que quieres hacer?" << endl;
	
																												cout <<  "1. Bajar del auto y continuar caminando" << endl;
																												cout <<  "2. Buscar otro camino" << endl;
																												cout <<  "3. Tratar de avanzar con el auto" << endl;
																												cout <<  "4. Cerrar" << endl;
																												cin >> eleccion;
	
																												switch (eleccion){
																													case '1' : 
																														vida = 0;
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "Eso no fue una buena idea un grupo de superviventes violentos tendieron una trampa y caiste en ella, lamentablemente no tuvieron piedad... Haz muerto..." << endl;
																														break;
																													case '2' : 
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "Ha sido un poco complicado, pero lograste llegar a salvo al supermercado y al parecer se encuentra abierto...";
																														do{
																															cout << "\n¿Que quieres hacer?" << endl;
	
																															cout <<  "1. Entrar al supermercado" << endl;
																															cout <<  "2. Buscar un arma y despues entrar" << endl;
																															cout <<  "3. Regresar" << endl;
																															cout <<  "4. Cerrar" << endl;
																															cin >> eleccion;
	
																															switch (eleccion){
																																case '1' : 
																																	vida = 0;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Lamentablemente el supermercado estaba lleno de zombies y no pudiste hacer nada...Haz muerto..." << endl;
																																	break;
																																case '2' : 
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Al entrar observas que todo se encuentra lleno de zombies, pero puedes recoger algunos suministros...";
																																	do{
																																		cout << "\n¿Que quieres hacer?" << endl;
	
																																		cout <<  "1. Tratar de recoger los suministros que puedas y salir" << endl;
																																		cout <<  "2. Tratar de eliminar a los zombies" << endl;
																																		cout <<  "3. Huir del lugar y regresar por donde viniste" << endl;
																																		cout <<  "4. Cerrar" << endl;
																																		cin >> eleccion;
	
																																		switch (eleccion){
																																			case '1' : 
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Tuviste que acabar con algunos zombies y te causaron heridas, sin embargo lograste recolectar algunas cosas. Al salir del lugar ves a un grupo de sobrevivientes que te llevaran a un lugar seguro...Puedes estar tranquilo te haz salvado" << endl;
																																				break;
																																			case '2' : 
																																				vida = 0;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Los zombies realmente eran demasiados pudiste acabar con unos, pero terminaron por devorarte... Haz muerto...";
																																				break;
																																			case '3' :
																																				vida = 100;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridad y te llevaron a un lugar seguro...Haz sobrevivido";
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
																																case '3' :
																																	vida = 100;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridas y te llevaran a un lugar seguro...Haz sobrevivido";
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
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "Esta siendo complicado pero poco a poco logras avanzar a costa de hacer mucho ruido, logras ver que enfrente de ti un grupo de sobrevivientes te miran mientras que un grupo de zombies se acercan";
																														do{
																															cout << "\n¿Que quieres hacer?" << endl;
	
																															cout <<  "1. Bajar y hablar con los sobrevivientes" << endl;
																															cout <<  "2. Tratar de huir corriendo" << endl;
																															cout <<  "3. Tratar de huir en carro" << endl;
																															cout <<  "4. Cerrar" << endl;
																															cin >> eleccion;
	
																															switch (eleccion){
																																case '1' : 
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Logras acercarte cuidadosamente y jefe del grupo dialoga contigo, llegan a un acuerdo y ahora puedes estar con ellos...Ahora estas a salvo..." << endl;
																																	break;
																																case '2' : 
																																	vida = 0;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Oh no... El grupo de zombies llego demasiado rapido y lograron alcanzarte devorandote sin piedad... Haz muerto...";
																																	break;
																																case '3' :
																																	vida = 45;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Al grupo de sobrevivientes no les gusto eso y te atacaron causandote algunas heridas, pero tuviste suerte y encontraste un refugio en tu huida... Ahora estas a salvo";
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
																											vida = 0;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "No sabias lo que las heridas podian causar y poco a poco comenzaron a hacerte sentir mal, tal vez tomar algo pudo ayudar ahora ya es muy tarde... Haz muerto...";
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
																					cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																					cout << "Fue una espera un poco larga, pero ahora parece que todo esta despejado, es momento de entrar a la sala...";
																					do{
																						cout << "\n¿Que quieres hacer?" << endl;
	
																						cout <<  "1. Entrar rapidamente por el medicamento" << endl;
																						cout <<  "2. Buscar un arma antes de entrar" << endl;
																						cout <<  "3. Olvidar el medicamento y salir a buscar ayuda" << endl;
																						cout <<  "4. Cerrar" << endl;
																						cin >> eleccion;
	
																						switch (eleccion){
																							case '1' : 
																								vida = 0;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Tomaste una decision apresurada pues a pesar de que ya no había ruido un pequeno grupo de zombies seguian en el lugar los cuales te atacaron sin piedad... Haz muerto..." << endl;
																								break;
																							case '2' : 
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "No estabas preparado para enfrentar esto aun asi logras conseguir algo...";
																								do{
																									cout << "\n¿Que quieres hacer?" << endl;
	
																									cout <<  "1. Agarrar una martillo" << endl;
																									cout <<  "2. Romper una botella" << endl;
																									cout <<  "3. Agarrar una varilla" << endl;
																									cout <<  "4. Cerrar" << endl;
																									cin >> eleccion;
	
																									switch (eleccion){
																										case '1' : 
																											vida = 50;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "El martillo fue buena opcion apesar de que eran varios zombies pudiste acabar con ellos acosta de algunas heridas, pero ahora puedes tomar el medicamento..." << endl;
																											do{
																												cout << "\n¿Que quieres hacer?" << endl;
	
																												cout <<  "1. Tomar el medicamento y cubrir las entradas de la casa" << endl;
																												cout <<  "2. Tomar el medicamento e ir por suministros al supermercado en carro" << endl;
																												cout <<  "3. No tomar el medicamento" << endl;
																												cout <<  "4. Cerrar" << endl;
																												cin >> eleccion;
	
																												switch (eleccion){
																													case '1' :
																														vida = 100;
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "Ahora que tomaste el medicamento te sientes mejor " << endl;
																														break;
																													case '2' : 
																														vida = 100;
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "El medicamento hizo que te sintieras mejor, ahora vas camino al supermercado y observas que el paso esta bloqueado, pero al parecer no pasa nada mas... ";
																		
																														do{
																															cout << "\n¿Que quieres hacer?" << endl;
	
																															cout <<  "1. Bajar del auto y continuar caminando" << endl;
																															cout <<  "2. Buscar otro camino" << endl;
																															cout <<  "3. Tratar de avanzar con el auto" << endl;
																															cout <<  "4. Cerrar" << endl;
																															cin >> eleccion;
	
																															switch (eleccion){
																																case '1' : 
																																	vida = 0;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Eso no fue una buena idea un grupo de superviventes violentos tendieron una trampa y caiste en ella, lamentablemente no tuvieron piedad... Haz muerto..." << endl;
																																	break;
																																case '2' : 
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Ha sido un poco complicado, pero lograste llegar a salvo al supermercado y al parecer se encuentra abierto...";
																																	do{
																																		cout << "\n¿Que quieres hacer?" << endl;
	
																																		cout <<  "1. Entrar al supermercado" << endl;
																																		cout <<  "2. Buscar un arma y despues entrar" << endl;
																																		cout <<  "3. Regresar" << endl;
																																		cout <<  "4. Cerrar" << endl;
																																		cin >> eleccion;
	
																																		switch (eleccion){
																																			case '1' : 
																																				vida = 0;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Lamentablemente el supermercado estaba lleno de zombies y no pudiste hacer nada...Haz muerto..." << endl;
																																				break;
																																			case '2' : 
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Al entrar observas que todo se encuentra lleno de zombies, pero puedes recoger algunos suministros...";
																																				do{
																																					cout << "\n¿Que quieres hacer?" << endl;
	
																																					cout <<  "1. Tratar de recoger los suministros que puedas y salir" << endl;
																																					cout <<  "2. Tratar de eliminar a los zombies" << endl;
																																					cout <<  "3. Huir del lugar y regresar por donde viniste" << endl;
																																					cout <<  "4. Cerrar" << endl;
																																					cin >> eleccion;
	
																																					switch (eleccion){
																																						case '1' : 
																																							cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																							cout << "Tuviste que acabar con algunos zombies y te causaron heridas, sin embargo lograste recolectar algunas cosas. Al salir del lugar ves a un grupo de sobrevivientes que te llevaran a un lugar seguro...Puedes estar tranquilo te haz salvado" << endl;
																																							break;
																																						case '2' : 
																																							vida = 0;
																																							cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																							cout << "Los zombies realmente eran demasiados pudiste acabar con unos, pero terminaron por devorarte... Haz muerto...";
																																							break;
																																						case '3' :
																																							vida = 100;
																																							cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																							cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridad y te llevaron a un lugar seguro...Haz sobrevivido";
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
																																			case '3' :
																																				vida = 100;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridas y te llevaran a un lugar seguro...Haz sobrevivido";
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
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Esta siendo complicado pero poco a poco logras avanzar a costa de hacer mucho ruido, logras ver que enfrente de ti un grupo de sobrevivientes te miran mientras que un grupo de zombies se acercan";
																																	do{
																																		cout << "\n¿Que quieres hacer?" << endl;
				
																																		cout <<  "1. Bajar y hablar con los sobrevivientes" << endl;
																																		cout <<  "2. Tratar de huir corriendo" << endl;
																																		cout <<  "3. Tratar de huir en carro" << endl;
																																		cout <<  "4. Cerrar" << endl;
																																		cin >> eleccion;
				
																																		switch (eleccion){
																																			case '1' : 
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Logras acercarte cuidadosamente y jefe del grupo dialoga contigo, llegan a un acuerdo y ahora puedes estar con ellos...Ahora estas a salvo..." << endl;
																																				break;
																																			case '2' : 
																																				vida = 0;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Oh no... El grupo de zombies llego demasiado rapido y lograron alcanzarte devorandote sin piedad... Haz muerto...";
																																				break;
																																			case '3' :
																																				vida = 45;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Al grupo de sobrevivientes no les gusto eso y te atacaron causandote algunas heridas, pero tuviste suerte y encontraste un refugio en tu huida... Ahora estas a salvo";
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
																														vida = 0;
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "No sabias lo que las heridas podian causar y poco a poco comenzaron a hacerte sentir mal, tal vez tomar algo pudo ayudar ahora ya es muy tarde... Haz muerto...";
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
																											vida = 0;
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "Eso no fue una buena idea la botella te corto y atrajo a los zombies y no pudiste hacer nada con tu mano herida... Haz muerto...";
																											break;
																										case '3' :
																											cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																											cout << "Buena decision, el tamaño de la varilla te permitio atacar sin acercarte demasiado. Ahora puedes tomar el medicamento...";
																											do{
																												cout << "\n¿Que quieres hacer?" << endl;
				
																												cout <<  "1. Tomar el medicamento y bloquear las entradas de la casa" << endl;
																												cout <<  "2. Tomar el medicamento e ir a buscar suministros al supermercado" << endl;
																												cout <<  "3. No tomar el medicamento" << endl;
																												cout <<  "4. Cerrar" << endl;
																												cin >> eleccion;
				
																												switch (eleccion){
																													case '1' : 
																														cout << "Miras a lo lejos el caos que se esta creando, todos tratan de escapar de la ciudad, pero logras ver que la casa de tu vecino esta abierta..." << endl;
										
							
																														break;
																													case '2' : 
																														vida = 100;
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "El medicamento hizo que te sintieras mejor, ahora vas camino al supermercado y observas que el paso esta bloqueado, pero al parecer no pasa nada mas... ";
																					
																														do{
																															cout << "\n¿Que quieres hacer?" << endl;
				
																															cout <<  "1. Bajar del auto y continuar caminando" << endl;
																															cout <<  "2. Buscar otro camino" << endl;
																															cout <<  "3. Tratar de avanzar con el auto" << endl;
																															cout <<  "4. Cerrar" << endl;
																															cin >> eleccion;
				
																															switch (eleccion){
																																case '1' : 
																																	vida = 0;
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Eso no fue una buena idea un grupo de superviventes violentos tendieron una trampa y caiste en ella, lamentablemente no tuvieron piedad... Haz muerto..." << endl;
																																	break;
																																case '2' : 
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Ha sido un poco complicado, pero lograste llegar a salvo al supermercado y al parecer se encuentra abierto...";
																																	do{
																																		cout << "\n¿Que quieres hacer?" << endl;
				
																																		cout <<  "1. Entrar al supermercado" << endl;
																																		cout <<  "2. Buscar un arma y despues entrar" << endl;
																																		cout <<  "3. Regresar" << endl;
																																		cout <<  "4. Cerrar" << endl;
																																		cin >> eleccion;
				
																																		switch (eleccion){
																																			case '1' : 
																																				vida = 0;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Lamentablemente el supermercado estaba lleno de zombies y no pudiste hacer nada...Haz muerto..." << endl;
																																				break;
																																			case '2' : 
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Al entrar observas que todo se encuentra lleno de zombies, pero puedes recoger algunos suministros...";
																																				do{
																																					cout << "\n¿Que quieres hacer?" << endl;
				
																																					cout <<  "1. Tratar de recoger los suministros que puedas y salir" << endl;
																																					cout <<  "2. Tratar de eliminar a los zombies" << endl;
																																					cout <<  "3. Huir del lugar y regresar por donde viniste" << endl;
																																					cout <<  "4. Cerrar" << endl;
																																					cin >> eleccion;
				
																																					switch (eleccion){
																																						case '1' : 
																																							cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																							cout << "Tuviste que acabar con algunos zombies y te causaron heridas, sin embargo lograste recolectar algunas cosas. Al salir del lugar ves a un grupo de sobrevivientes que te llevaran a un lugar seguro...Puedes estar tranquilo te haz salvado" << endl;
																																							break;
																																						case '2' : 
																																							vida = 0;
																																							cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																							cout << "Los zombies realmente eran demasiados pudiste acabar con unos, pero terminaron por devorarte... Haz muerto...";
																																							break;
																																						case '3' :
																																							vida = 100;
																																							cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																							cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridad y te llevaron a un lugar seguro...Haz sobrevivido";
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
																																			case '3' :
																																				vida = 100;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Mientras regresabas encontraste a un grupo de soldados que buscaban sobrevivientes ellos curaron tus heridas y te llevaran a un lugar seguro...Haz sobrevivido";
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
																																	cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																	cout << "Esta siendo complicado pero poco a poco logras avanzar a costa de hacer mucho ruido, logras ver que enfrente de ti un grupo de sobrevivientes te miran mientras que un grupo de zombies se acercan";
																																	do{
																																		cout << "\n¿Que quieres hacer?" << endl;
				
																																		cout <<  "1. Bajar y hablar con los sobrevivientes" << endl;
																																		cout <<  "2. Tratar de huir corriendo" << endl;
																																		cout <<  "3. Tratar de huir en carro" << endl;
																																		cout <<  "4. Cerrar" << endl;
																																		cin >> eleccion;
				
																																		switch (eleccion){
																																			case '1' : 
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Logras acercarte cuidadosamente y jefe del grupo dialoga contigo, llegan a un acuerdo y ahora puedes estar con ellos...Ahora estas a salvo..." << endl;
																																				break;
																																			case '2' : 
																																				vida = 0;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Oh no... El grupo de zombies llego demasiado rapido y lograron alcanzarte devorandote sin piedad... Haz muerto...";
																																				break;
																																			case '3' :
																																				vida = 45;
																																				cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																																				cout << "Al grupo de sobrevivientes no les gusto eso y te atacaron causandote algunas heridas, pero tuviste suerte y encontraste un refugio en tu huida... Ahora estas a salvo";
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
																														vida = 0;
																														cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																														cout << "No sabias lo que las heridas podian causar y poco a poco comenzaron a hacerte sentir mal, tal vez tomar algo pudo ayudar ahora ya es muy tarde... Haz muerto...";
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
																								vida = 0;
																								cout << "\t\t\t\t\t\t\t" << nombre << ' ' << vida << " HP" << endl;
																								cout << "Mientras buscabas ayuda comenzaste a sentirte demasiado mal hasta el punto de perder el control de tu cuerpo, tal vez algun medicamento pudo ayudar, ahora es demasiado tarde... Te haz convertido en un zombie...";
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
																		cout << "Salir";
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
