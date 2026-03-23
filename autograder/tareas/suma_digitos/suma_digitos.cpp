#include <iostream>
using namespace std;

int suma_digitos(int n) {
    int suma = 0;
    
    while (n > 0) {
        suma += n % 10; 
        n /= 10;        
    }
    
    return suma;
}

int main() {
    int n;
    cin >> n;
    
    cout << suma_digitos(n) << endl;
    
    return 0;
}