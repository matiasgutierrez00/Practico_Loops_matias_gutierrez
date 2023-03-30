#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string color1, color2, color3, color;
    cin >> color1 >> color2 >> color3 >> color;

    if (color1 == color) {
        cout << "Enter the house 1" <<endl;
    } else if (color2 == color) {
        cout << "Enter the house 2"<<endl;
    } else if (color3 == color) {
        cout << "Enter the house 3" <<endl;
    } else {
        cout << "Seek somewhere else"<<endl;
    }

    return 0;
}
