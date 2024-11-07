#include <iostream>
#include <string>

using namespace std;

string reverseString(string input) {
    string reversed;
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }
    return reversed;
}

int main() {
    string original;
    cout << "Digite uma string para inverter: ";
    cin >> original;

    string inverted = reverseString(original);

    cout << "String invertida: " << inverted << endl;

    return 0;
}
