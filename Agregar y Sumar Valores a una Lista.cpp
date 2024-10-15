/ SUMANDO VALORES DE UNA LISTA

 

#include <iostream>

#include <list>

using namespace std;

 

int main()

{

    list<int> lista;

    int valor = -1;

    while (valor != 0){

        cout << "ingrese un numero 0 para salir" << endl;

        cin >> valor;

        if (valor != 0){

            auto final = lista.end();

            lista.insert(final, valor);

        }

    }

    

    int suma = 0;

    for (int num: lista){

        suma = suma + num;

    }

    

    cout << "La suma de los elementos de la lista es " << suma << endl;

    

}
