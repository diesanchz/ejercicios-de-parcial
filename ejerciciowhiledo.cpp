#include <iostream>
using namespace std;

int main() {
    int numero, original, invertido = 0;

    cout << "Ingresa un número: ";
    cin >> numero;

    original = numero;

    while (numero > 0) {
        int digito = numero % 10;                 // Obtiene el último dígito
        invertido = invertido * 10 + digito;      // Lo agrega al número invertido
        numero /= 10;                             // Elimina el último dígito del número
    }

    if (original == invertido) {
        cout << "El número es capicúa." << endl;
    } else {
        cout << "El número NO es capicúa." << endl;
    }

    return 0;
}
