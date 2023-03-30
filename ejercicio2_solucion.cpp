#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y != z) {
        cout << "Error. The sum of " << x << " and " << y << " is " << x + y << endl;
    }

    return 0;
}
