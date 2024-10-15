// AGREGAR VALOR A LA LISTA

#include <iostream>

#include <list>

using namespace std;

 

int main()

{

    list<int> lista = {12, 5, 6, 1};

    auto final = lista.end();

    lista.insert(final, 20);

    

    for (int num: lista){

        cout << "elemento " << num << endl;

    }

    

}
