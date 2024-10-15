#include<iostream>

using namespace std;

int main(){
	float lado; // variable
	float volumen;
	
	cout<<"Ingresar el largo del lado "<<endl;
	cin>>lado; //se guarda el valor en la variable
	
	volumen = lado * lado * lado ;
	
	cout << "el volumen del cubo es: " <<volumen;
	
	return 0;
}

