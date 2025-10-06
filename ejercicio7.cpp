

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "Factorial: " << factorial(num);
    return 0;
}
