#include <iostream>
#include <vector>
#include <algorithm> // Para usar la función sort
#include <locale.h>
#include <vector>
#include <ctime>

using namespace std;

// verificar si un número ya fue ingresado previamente
bool numeroYaIngresado(const vector<int>& intentos, int numero) {
    for (int i = 0; i < intentos.size(); ++i) {
        if (intentos[i] == numero) {
            return true;
        }
    }
    return false;
}


//muestra los números ingresados que recibe del vector
void mostrarNumerosIngresados(const vector<int>& numeros) {
    cout << "Números ingresados previamente: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "");

    
    srand(time(0));

    int limite_inferior, limite_superior, intentos_maximos;

    cout << "Ingrese el límite inferior: ";
    cin >> limite_inferior;

    cout << "Ingrese el límite superior: ";
    cin >> limite_superior;

    if (limite_inferior >= limite_superior) {
        cout << "El límite inferior debe ser menor que el límite superior. Terminando el programa." << endl;
        return 1;
    }

    cout << "Ingrese la cantidad de intentos máximos: ";
    cin >> intentos_maximos;

    if (intentos_maximos <= 0) {
        cout << "La cantidad de intentos debe ser un número positivo. Terminando el programa." << endl;
        return 1;
    }

    int numero_secreto = rand() % (limite_superior - limite_inferior + 1) + limite_inferior;

    int intentos = 0;
    int numero_usuario;
    vector<int> numeros_ingresados;

    while (intentos < intentos_maximos) {
        cout << "Intento " << (intentos + 1) << "\nIngrese un número dentro del rango " << limite_inferior << " y " << limite_superior << ": ";
        cin >> numero_usuario;

        if (numero_usuario < limite_inferior || numero_usuario > limite_superior) {
            cout << "El número ingresado está fuera del rango. Intenta con un número válido." << endl;
            continue;
        }

        if (numeroYaIngresado(numeros_ingresados, numero_usuario)) {
            cout << "Este número ya ha sido ingresado previamente. Por favor, intenta con otro." << endl;
            continue;
        }

        numeros_ingresados.push_back(numero_usuario);

        if (numero_usuario == numero_secreto) {
            cout << "¡Felicidades! Has adivinado el número correctamente en " << (intentos + 1) << " intentos." << endl;
            break;
        } else {
            cout << "Número incorrecto.";

            if (numero_usuario < numero_secreto) {
                cout << " El número es mayor." << endl;
            } else {
                cout << " El número es menor." << endl;
            }

            mostrarNumerosIngresados(numeros_ingresados);
            intentos++;
            cout << "Te quedan " << (intentos_maximos - intentos) << " intentos." << endl;
        }
    }

    if (intentos == intentos_maximos) {
        cout << "Has agotado todos tus intentos. El número correcto era: " << numero_secreto << endl;
         mostrarNumerosIngresados(numeros_ingresados);
    }
    return 0;
}
