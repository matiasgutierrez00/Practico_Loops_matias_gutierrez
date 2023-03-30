#include <iostream>
using namespace std;

int main() {
    int bill;
    int sum = 0;
    bool exit = false;
    while (!exit) {
        cin >> bill;
        if (bill == 0) {
            exit = true;
        } else if (bill > 0) {
            cout << "Income: " << bill << endl;
            sum += bill;
        }
    }
    cout << "Total income: " << sum << endl;
}
