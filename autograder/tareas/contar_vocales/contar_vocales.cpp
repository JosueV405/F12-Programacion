#include <iostream>
#include <cctype>
using namespace std;


int contar_vocales(string linea) {
    int contador = 0;

    
    for (size_t i = 0; i < linea.length(); i++) {
        char c = tolower(linea[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    return contador;
}

int main() {
    string linea;
    getline(cin, linea);

    cout << contar_vocales(linea) << endl;

    return 0;
}