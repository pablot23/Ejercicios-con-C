/*#include <iostream>

int main() {
    float pesos, tipo_de_cambio, dolares;

    std::cout << "Ingrese la cantidad de pesos argentinos: ";
    std::cin >> pesos;

    std::cout << "Ingrese el tipo de cambio: ";
    std::cin >> tipo_de_cambio;

    dolares = pesos / tipo_de_cambio;

    std::cout << "El equivalente en dólares es: " << dolares << std::endl;

    return 0;
}*/



#include<iostream>

using namespace std;

int main(){
	float valorPesos; // variable
	float result;
	const int dolar=1010;
	
	cout<<"Ingresar la cantidad de pesos que desea convertir "<<endl;
	cin>>valorPesos; //se guarda el valor en la variable
	
	result = valorPesos / dolar;
	
	cout << "la conversion es: " <<result;
	
	return 0;
}

/*#include <iostream>
#define DOLAR 380
int main()
{
	float pesos, dolares;
	printf("Ingrese la cantidad de pesos ($): ");
	scanf("%f", &pesos);
	dolares = pesos / DOLAR;
	printf("\nEquivalen a: %.2f dolares", dolares);
return 0;*/

