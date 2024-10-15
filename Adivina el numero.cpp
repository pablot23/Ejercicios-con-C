#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int rangoMinimo, rangoMaximo, intentosMaximos;
    int numeroGenerado, intento;
    int intentosRestantes;
    int numerosIngresados[100];
    int cantidadNumerosIngresados = 0;

    // Solicitar al usuario el rango de números y la cantidad de intentos
    cout << "Ingrese el rango de números para el juego:" << endl;
    cout << "Rango mínimo: ";
    cin >> rangoMinimo;
    cout << "Rango máximo: ";
    cin >> rangoMaximo;
    cout << "Ingrese la cantidad de intentos máximos: ";
    cin >> intentosMaximos;

    // Generar un número aleatorio dentro del rango ingresado
    srand(time(0));
    numeroGenerado = rand() % (rangoMaximo - rangoMinimo + 1) + rangoMinimo;

    // Juego de adivinanzas
    cout << "¡Adivina el número!" << endl;

    intentosRestantes = intentosMaximos;
    while (intentosRestantes > 0) {
        cout << "Intento #" << intentosMaximos - intentosRestantes + 1 << endl;
        cout << "Ingresa un número: ";
        cin >> intento;

        // Verificar si el número ingresado es mayor o menor que el número generado
        if (intento > numeroGenerado) {
            cout << "El número ingresado es mayor." << endl;
        } else if (intento < numeroGenerado) {
            cout << "El número ingresado es menor." << endl;
        } else {
            cout << "¡Felicidades! Has adivinado el número." << endl;
            break;
        }

        // Guardar el número ingresado en el array
        numerosIngresados[cantidadNumerosIngresados] = intento;
        cantidadNumerosIngresados++;

        // Ordenar los números ingresados de manera ascendente
        sort(numerosIngresados, numerosIngresados + cantidadNumerosIngresados);

        // Mostrar los números ingresados ordenados
        cout << "Números ingresados: ";
        for (int i = 0; i < cantidadNumerosIngresados; i++) {
            cout << numerosIngresados[i] << " ";
        }
        cout << endl;

        intentosRestantes--;
        cout << "Intentos restantes: " << intentosRestantes << endl;
    }

    if (intentosRestantes == 0) {
        cout << "¡Lo siento! Te has quedado sin intentos. El número era: " << numeroGenerado << endl;
    }

    return 0;
}

