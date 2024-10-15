// DECLARAR EL ARREGLO EN UNA SOLA LINEA

 

#include <iostream>

using namespace std;

 

int main()

{

    int arreglo[5] = {10, 23, 3, -5, 8};

    int suma = 0;

 

    for (int i = 0; i < 5; i++){

        suma = suma + arreglo[i];

    }

    

    cout << "La suma de los valores del arreglo es " << suma << endl;

}
