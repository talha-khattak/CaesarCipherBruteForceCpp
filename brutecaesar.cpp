#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < alphabet.length(); i++) {
        cout << i << ": ";
        for(int j = 0; j < input.length(); j++) {
            if(input[j] == ' ') {
                cout << " ";
            }
            else {
                cout << alphabet[(alphabet.find(input[j]) + i) % alphabet.length()];
            }
        }
        cout << endl;
    }
}
