// SUMA DE ARREGLOS

 

#include <iostream>

using namespace std;

 

int main()

{

    int arreglo[5];

    int suma = 0;

    arreglo[0] = 10;

    arreglo[1] = 23;

    arreglo[2] = 3;

    arreglo[3] = -5;

    arreglo[4] = 8;

    

    for (int i = 0; i < 5; i++){

        suma = suma + arreglo[i];

    }

    

    cout << "La suma de los valores del arreglo es " << suma << endl;

    

    

}
