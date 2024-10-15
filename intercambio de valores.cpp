#include<iostream>

using namespace std;


int main() {
	
	int num1;
	int num2;
	int aux;
	
	//num1 = 20;
	//num2 = 35;
	//cout << "El valor del primer numero es " << num1 << endl;
	//cout << "El valor del segundo numero es " << num2 << endl;
	cout<<"Ingresar el primer numero "<<endl;
	cin>>num1; //se guarda el valor en la variable
	cout<<"Ingresar el segundo numero "<<endl;
	cin>>num2; //se guarda el valor en la variable
	
	aux = num1;	// aux aca va a valer =20
	num1 = num2; // num1 va ser igual a numero 2 seria 35
	num2 = aux;	// de esta forma nuestro num2 va a ser 20
	
	cout << "El intercambio es: "  << num1 << endl;
	cout << "El intercambio es:  " << num2 << endl;
	return 0;
}





/*#include<iostream>

using namespace std;

int main(){
	int v1; // variables
	int v2;
	int v3;

	
	cout<<"Ingresar el primer número "<<endl;
	cin>>v1; //se guarda el valor en la variable
	cout<<"Ingresar el segundo número "<<endl;
	cin>>v2; //se guarda el valor en la variable

	
	cout << "el intercambio de valores es: " <<v2;
	
	return 0;
}*/
