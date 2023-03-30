#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    cin >> base >> exponente;
    
    int resultado = 1;
    for(int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    
    cout << "El resultado es: " << resultado << endl;
    
    return 0;
}
