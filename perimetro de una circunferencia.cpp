
#include <iostream>
using namespace std;

int main() {
    float radio, perimetro;
    const float Pi = 3.1415;

    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;

    perimetro = 2 * Pi * radio;

    cout << "El perímetro de la círcurferencia es: " << perimetro << endl;

    return 0;
}


