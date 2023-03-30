#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);  
    
    string word = "";  
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == ' ') {  
            cout << "[" << word << "]" << endl;  
            word = "";  
        }
        else {
            word += input[i];  
        }
    }
    cout << "[" << word << "]" << endl;  
    
    return 0;
}
