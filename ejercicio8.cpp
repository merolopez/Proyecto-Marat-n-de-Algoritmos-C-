#include <iostream>
using namespace std;

int potencia(int base, int exp) {
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}

int main() {
    int b, e;
    cout << "Base: "; cin >> b;
    cout << "Exponente: "; cin >> e;
    cout << "Resultado: " << potencia(b, e);
    return 0;
}
