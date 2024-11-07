#include <iostream>

using namespace std;

int main() {
    int i = 13, soma = 0, k = 0;
    
    while (k < i) {
        k = k + 1;
        soma = soma + k;
    }
    
    cout << soma << endl;
    
    return 0;
}
