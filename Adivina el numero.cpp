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

    // Solicitar al usuario el rango de n�meros y la cantidad de intentos
    cout << "Ingrese el rango de n�meros para el juego:" << endl;
    cout << "Rango m�nimo: ";
    cin >> rangoMinimo;
    cout << "Rango m�ximo: ";
    cin >> rangoMaximo;
    cout << "Ingrese la cantidad de intentos m�ximos: ";
    cin >> intentosMaximos;

    // Generar un n�mero aleatorio dentro del rango ingresado
    srand(time(0));
    numeroGenerado = rand() % (rangoMaximo - rangoMinimo + 1) + rangoMinimo;

    // Juego de adivinanzas
    cout << "�Adivina el n�mero!" << endl;

    intentosRestantes = intentosMaximos;
    while (intentosRestantes > 0) {
        cout << "Intento #" << intentosMaximos - intentosRestantes + 1 << endl;
        cout << "Ingresa un n�mero: ";
        cin >> intento;

        // Verificar si el n�mero ingresado es mayor o menor que el n�mero generado
        if (intento > numeroGenerado) {
            cout << "El n�mero ingresado es mayor." << endl;
        } else if (intento < numeroGenerado) {
            cout << "El n�mero ingresado es menor." << endl;
        } else {
            cout << "�Felicidades! Has adivinado el n�mero." << endl;
            break;
        }

        // Guardar el n�mero ingresado en el array
        numerosIngresados[cantidadNumerosIngresados] = intento;
        cantidadNumerosIngresados++;

        // Ordenar los n�meros ingresados de manera ascendente
        sort(numerosIngresados, numerosIngresados + cantidadNumerosIngresados);

        // Mostrar los n�meros ingresados ordenados
        cout << "N�meros ingresados: ";
        for (int i = 0; i < cantidadNumerosIngresados; i++) {
            cout << numerosIngresados[i] << " ";
        }
        cout << endl;

        intentosRestantes--;
        cout << "Intentos restantes: " << intentosRestantes << endl;
    }

    if (intentosRestantes == 0) {
        cout << "�Lo siento! Te has quedado sin intentos. El n�mero era: " << numeroGenerado << endl;
    }

    return 0;
}

