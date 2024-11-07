#include <iostream>

using namespace std;

bool isFibonacci(int n) {
    if (n == 0 || n == 1) return true;
    
    int a = 0, b = 1, next = a + b;
    
    while (next <= n) {
        if (next == n) return true;
        
        a = b;
        b = next;
        next = a + b;
    }
    
    return false;
}

int main() {
    int num;
    
    cout << "Digite um numero: ";
    cin >> num;
    
    if (isFibonacci(num)) {
        cout << "O numero esta na sequencia\n";
    } else {
        cout << "O numero nao esta na sequencia";
    }
    
    return 0;
}
