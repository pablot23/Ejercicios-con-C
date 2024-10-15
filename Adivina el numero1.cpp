#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int rangoMinimo, rangoMaximo, intentosMaximos;
    
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
    int numeroGenerado = rand() % (rangoMaximo - rangoMinimo + 1) + rangoMinimo;
    
    int intentosRestantes = intentosMaximos;
    int intentosRealizados = 0;
    int numerosIngresados[intentosMaximos];
    
    while (intentosRestantes > 0) {
        int numeroIngresado;
        
        // Solicitar al usuario que ingrese un número
        cout << "Ingrese un número: ";
        cin >> numeroIngresado;
        
        // Verificar si el número ingresado ya fue ingresado anteriormente
        if (find(numerosIngresados, numerosIngresados + intentosRealizados, numeroIngresado) != numerosIngresados + intentosRealizados) {
            cout << "El número ingresado ya fue ingresado anteriormente. Intente nuevamente." << endl;
            continue;
        }
        
        // Guardar el número ingresado en el array
        numerosIngresados[intentosRealizados] = numeroIngresado;
        intentosRealizados++;
        
        // Ordenar los números ingresados por el usuario de manera ascendente
        sort(numerosIngresados, numerosIngresados + intentosRealizados);
        
        // Verificar si el número ingresado es mayor, menor o igual al número generado
        if (numeroIngresado > numeroGenerado) {
            cout << "El número ingresado es mayor que el número generado." << endl;
        } else if (numeroIngresado < numeroGenerado) {
            cout << "El número ingresado es menor que el número generado." << endl;
        } else {
            cout << "¡Felicidades! Has adivinado el número." << endl;
            break;
        }
        
        // Mostrar los números ingresados ordenados
        cout << "Números ingresados ordenados: ";
        for (int i = 0; i < intentosRealizados; i++) {
            cout << numerosIngresados[i] << " ";
        }
        cout << endl;
        
        // Actualizar los intentos restantes
        intentosRestantes--;
        cout << "Intentos restantes: " << intentosRestantes << endl;
    }
    
    if (intentosRestantes == 0) {
        cout << "Se han agotado los intentos. El número generado era: " << numeroGenerado << endl;
    }
    
    return 0;
}

