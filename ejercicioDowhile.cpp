#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos terminos de la serie Fibonacci deseas?: ";
    cin >> n;

    int a = 0, b = 1;
    int contador = 0;

    while (contador < n) {
        cout << a << " ";
        int siguiente = a + b;
        a = b;
        b = siguiente;
        contador++;
    }

    cout << endl;
    return 0;
}
