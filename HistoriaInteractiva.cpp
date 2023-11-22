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
	
	
	cout << "\t\t\t\t\t\t" << vida << " HP" << endl;
	cout << "*Llamada entrante*...\n Hola " << nombre << " me alegro de que por fin hayas contestado, ¿Como estas? Es una completa pesadilla lo que esta pasando afuera. ";
	cout << "La gente esta enloqueciendo, son muy violentos y nadie sabe que es lo que pasa, el gobierno solo ha declarado estado de emergencia y toque de queda, ";
	cout << "pero la gente lo esta ignorando. Yo tratare de llegar a un lugar seguro y esperare a que todo pase, tu trata de hacer lo mismo." << endl;
	cout << "Cuidate mucho amigo, ¡Suerte!" << endl;
	
	do{
		cout << "\n¿Que quieres hacer?" << endl;
	
		cout <<  "1. Mirar por la ventana" << endl;
		cout <<  "2. Ir con tu vecino" << endl;
		cout <<  "3. Bajar por tu auto" << endl;
		cout <<  "4. Dormir" << endl;
		cout <<  "5. Cerrar" << endl;
		cin >> eleccion;
	
		switch (eleccion){
			case '1' : 
				cout << "Mirar por la ventana";
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
				cout << "Salir";
				break;
			default :
				cout << "La opcion que elejiste no existe.";
				break;
		}
	} while (eleccion != '1' && eleccion != '2' && eleccion != '3' && eleccion != '4' && eleccion != '5');
	
	
	
	
	return 0;
}
