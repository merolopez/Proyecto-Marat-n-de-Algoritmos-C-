
#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;
public:
    CuentaBancaria(double inicial) { saldo = inicial; }

    void depositar(double monto) { saldo += monto; }
    void retirar(double monto) { if (monto <= saldo) saldo -= monto; }
    void mostrarSaldo() { cout << "Saldo actual: $" << saldo << endl; }
};

int main() {
    CuentaBancaria cuenta(100.0);
    cuenta.depositar(50);
    cuenta.retirar(30);
    cuenta.mostrarSaldo();
    return 0;
}
