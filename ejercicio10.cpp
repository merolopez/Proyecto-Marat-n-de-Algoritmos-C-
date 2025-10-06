#include <iostream>
using namespace std;

#define MAX 5

class Pila {
private:
    int datos[MAX];
    int tope;
public:
    Pila() { tope = -1; }

    void push(int valor) {
        if (tope < MAX - 1) datos[++tope] = valor;
        else cout << "Pila llena\n";
    }

    void pop() {
        if (tope >= 0) tope--;
        else cout << "Pila vacía\n";
    }

    void mostrar() {
        for(int i = tope; i >= 0; i--)
            cout << datos[i] << " ";
        cout << endl;
    }
};

int main() {
    Pila p;
    p.push(10);
    p.push(20);
    p.push(30);
    p.mostrar();
    p.pop();
    p.mostrar();
    return 0;
}
