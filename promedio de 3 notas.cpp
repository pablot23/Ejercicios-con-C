#include<iostream>

using namespace std;

int main(){
	float nota1; // variables
	float nota2;
	float nota3;
	float promedio;
	
	cout<<"Ingresar la primer nota "<<endl;
	cin>>nota1; //se guarda el valor en la variable
	cout<<"Ingresar la segunda nota "<<endl;
	cin>>nota2; //se guarda el valor en la variable
	cout<<"Ingresar la tercer nota "<<endl;
	cin>>nota3; //se guarda el valor en la variable
	promedio = (nota1 + nota2 + nota3)/3;
	
	cout << "el promedio es: " <<promedio;
	
	return 0;
}

