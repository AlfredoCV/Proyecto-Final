#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	char nombre[15];
	int vida = 100;
	 
	cout << "***********BIENVENIDO AL APOCALIPSIS ZOMBIE***********" << endl;
	cout << "Ingresa un nombre de usuario (Maximo 15 caracteres)" << endl;
	cin.getline(nombre, 15, '\n');
	cout << endl;
	
	
	cout << "\t\t\t\t\t\t" << vida << " HP" << endl;
	cout << "*Llamada entrante*...\n Hola " << nombre << " me alegro de que por fin contestaste, ¿Como estas? Es una completa pesadilla lo que esta pasando afuera. ";
	cout << "La gente esta enloqueciendo, son muy violentos y nadie sabe que es lo que pasa, el gobierno solo ha declarado estado de emergencia y toque de queda, ";
	cout << "pero la gente lo esta ignorando. Yo tratare de llegar a un lugar seguro y esperare a que todo pase, tu trata de hacer lo mismo." << endl;
	cout << "Cuidate mucho amigo, ¡Suerte!" << endl;
	
	
	return 0;
}
