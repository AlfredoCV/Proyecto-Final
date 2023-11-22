#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	char nombre[15];
	int vida = 100;
	 
	cout << "***********BIENVENIDO AL APOCALIPSIS ZOMBIE***********" << endl;
	cout << "Ingresa un nombre de usuario (Maximo 15 caracteres)" << endl;
	cin.getline(nombre, 15, '\n');
	return 0;
}
