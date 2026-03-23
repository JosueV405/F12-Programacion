#include <iostream>
#include <cmath>
using namespace std;

bool es_primo(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (es_primo(n)) {
        cout << "primo" << endl;
    } else {
        cout << "no primo" << endl;
    }

    return 0;
}