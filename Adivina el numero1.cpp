#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int rangoMinimo, rangoMaximo, intentosMaximos;
    
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
    int numeroGenerado = rand() % (rangoMaximo - rangoMinimo + 1) + rangoMinimo;
    
    int intentosRestantes = intentosMaximos;
    int intentosRealizados = 0;
    int numerosIngresados[intentosMaximos];
    
    while (intentosRestantes > 0) {
        int numeroIngresado;
        
        // Solicitar al usuario que ingrese un n�mero
        cout << "Ingrese un n�mero: ";
        cin >> numeroIngresado;
        
        // Verificar si el n�mero ingresado ya fue ingresado anteriormente
        if (find(numerosIngresados, numerosIngresados + intentosRealizados, numeroIngresado) != numerosIngresados + intentosRealizados) {
            cout << "El n�mero ingresado ya fue ingresado anteriormente. Intente nuevamente." << endl;
            continue;
        }
        
        // Guardar el n�mero ingresado en el array
        numerosIngresados[intentosRealizados] = numeroIngresado;
        intentosRealizados++;
        
        // Ordenar los n�meros ingresados por el usuario de manera ascendente
        sort(numerosIngresados, numerosIngresados + intentosRealizados);
        
        // Verificar si el n�mero ingresado es mayor, menor o igual al n�mero generado
        if (numeroIngresado > numeroGenerado) {
            cout << "El n�mero ingresado es mayor que el n�mero generado." << endl;
        } else if (numeroIngresado < numeroGenerado) {
            cout << "El n�mero ingresado es menor que el n�mero generado." << endl;
        } else {
            cout << "�Felicidades! Has adivinado el n�mero." << endl;
            break;
        }
        
        // Mostrar los n�meros ingresados ordenados
        cout << "N�meros ingresados ordenados: ";
        for (int i = 0; i < intentosRealizados; i++) {
            cout << numerosIngresados[i] << " ";
        }
        cout << endl;
        
        // Actualizar los intentos restantes
        intentosRestantes--;
        cout << "Intentos restantes: " << intentosRestantes << endl;
    }
    
    if (intentosRestantes == 0) {
        cout << "Se han agotado los intentos. El n�mero generado era: " << numeroGenerado << endl;
    }
    
    return 0;
}

