#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    int lowerBound, upperBound, maxAttempts;
    std::cout << "Ingrese el rango de numeros para el juego (limite inferior y superior): ";
    std::cin >> lowerBound >> upperBound;
    std::cout << "Ingrese la cantidad de intentos maximos: ";
    std::cin >> maxAttempts;

    // Generar un número aleatorio dentro del rango ingresado
    srand(time(0));
    int randomNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

    int attempts = 0;
    int remainingAttempts = maxAttempts;
    int* guessedNumbers = new int[maxAttempts];
    int guessedNumber;

    while (remainingAttempts > 0) {
        std::cout << "Ingrese un numero: ";
        std::cin >> guessedNumber;

        // Verificar si el número ya fue ingresado anteriormente
        if (std::find(guessedNumbers, guessedNumbers + attempts, guessedNumber) != guessedNumbers + attempts) {
            std::cout << "El numero ya fue ingresado anteriormente. Intente nuevamente." << std::endl;
            continue;
        }

        // Guardar el número ingresado en el array
        guessedNumbers[attempts] = guessedNumber;
        attempts++;

        // Ordenar los números ingresados por el usuario de manera ascendente
        std::sort(guessedNumbers, guessedNumbers + attempts);

        // Indicar los números que ya fueron ingresados, ordenados
        std::cout << "Numeros ingresados: ";
        for (int i = 0; i < attempts; i++) {
            std::cout << guessedNumbers[i] << " ";
        }
        std::cout << std::endl;

        // Verificar si el número ingresado es mayor, menor o igual al número generado
        if (guessedNumber > randomNumber) {
            std::cout << "El numero ingresado es mayor que el numero generado." << std::endl;
        } else if (guessedNumber < randomNumber) {
            std::cout << "El numero ingresado es menor que el numero generado." << std::endl;
        } else {
            std::cout << "Felicitaciones, ha adivinado el numero!" << std::endl;
            break;
        }

        remainingAttempts--;
        std::cout << "Intentos realizados: " << attempts << std::endl;
        std::cout << "Intentos restantes: " << remainingAttempts << std::endl;
    }

    if (remainingAttempts == 0) {
        std::cout << "Se ha quedado sin intentos. El numero generado era: " << randomNumber << std::endl;
    }

    delete[] guessedNumbers;

    return 0;
}

