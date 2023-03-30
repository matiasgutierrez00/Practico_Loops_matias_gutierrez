#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero no negativo: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Numero negativo ingresado. Intente de nuevo." << endl;
        return 0;
    }
    
    if (n > 12) {
        cout << "El numero ingresado es muy grande y tomara mucho tiempo para calcular. Intente de nuevo." << endl;
        return 0;
    }
    
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    cout << "El factorial de " << n << " es: " << fact << endl;
    return 0;
}
