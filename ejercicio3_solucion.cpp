#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (abs(a - b) < 1e-6) {
        cout << "La naranja se divide en dos partes iguales" << endl;
    } else if (a > b) {
        cout << "Cortar " << a - b << " de la primera parte" << endl;
    } else {
        cout << "Cortar " << b - a << " de la segunda parte" << endl;
    }

    return 0;
}
