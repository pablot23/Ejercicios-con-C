#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int cant_intentos,int intentos_restantes,int intentos_usados,int numero,int num_usuario,int rango_maximo,int rango_minimo;
	
	cout << "ingresar el rango de numeros para el juego: " << endl;
	cout << "rango minimo: " << endl;
	cin >> rango_minimo;
	cout << "rango maximo: " << endl;
	cin >> rango_maximo;
	cout << "ingresar la cantidad de intentos: " << endl;
	cin >> cant_intentos;
	while (rango_minimo>=rango_maximo || cant_intentos<=0) {
		cout << "ERROR ---> Ingresar un rango valido y la cantidad de intentos mayor a cero" << endl;
		cout << "rango minimo: " << endl;
		cin >> rango_minimo;
		cout << "rango maximo: " << endl;
		cin >> rango_maximo;
		cout << "ingresar la cantidad de intentos: " << endl;
		cin >> cant_intentos;
	}
	numero = (rango_minimo+rand()%(rango_maximo)-(rango_minimo)+1);
	intentos_restantes = cant_intentos;
	intentos_usados = 0;
	while (intentos_restantes>0) {
		cout << "los intentos restantes son: " << intentos_restantes << endl;
		cout << "los intentos usados son: " << intentos_usados << endl;
		cout << "ingresar un numero: " << endl;
		cin >> num_usuario;
		if (num_usuario<rango_minimo || num_usuario>rango_maximo) {
			cout << "ERROR ---> El numero ingresado esta fuera de rango" << endl;
		}
		if (num_usuario==numero) {
			cout << "¡BRAVOOO!!! has adivinado el numero" << endl;
			intentos_restantes = 0;
		} else {
			if (num_usuario<numero) {
				if (num_usuario<numero) {
					cout << "el numero que desea adivinar es mayor" << endl;
				} else {
					cout << "el numero que desea adivinar es menor" << endl;
				}
			}
		}
		intentos_usados = intentos_usados+1;
		intentos_restantes = intentos_restantes-1;
	}
	if (intentos_restantes<=0) {
		cout << "no hay mas intentos. El numero era: " << numero << endl;
	}
	return 0;
}

