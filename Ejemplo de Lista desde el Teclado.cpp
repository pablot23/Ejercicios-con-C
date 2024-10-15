// LISTA DESDE EL TECLADO

 

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

    

    for (int num: lista){

        cout << "elemento " << num << endl;

    }

    

}
