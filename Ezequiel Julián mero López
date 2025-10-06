🧩 1. Intercambiar valores usando punteros
#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    intercambiar(&x, &y);
    cout << "x = " << x << ", y = " << y;
    return 0;
}
💡 Usa punteros para acceder directamente a la memoria de las variables.


🧩 2. Asignar memoria dinámica para un arreglo
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int *arr = new int[n]; // memoria dinámica

    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Elementos ingresados: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr; // liberar memoria
    return 0;
}
💡 Ejemplo de uso de new y delete.


🧩 3. Copiar una cadena con punteros
#include <iostream>
using namespace std;

void copiarCadena(char *dest, const char *orig) {
    while (*orig) {
        *dest = *orig;
        dest++;
        orig++;
    }
    *dest = '\0';
}

int main() {
    char origen[100] = "Hola Mundo";
    char destino[100];
    copiarCadena(destino, origen);
    cout << "Copia: " << destino;
    return 0;
}
💡 Copia carácter por carácter usando aritmética de punteros.


🧩 4. Clase Persona con métodos
#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    Persona p1;
    p1.nombre = "Ana";
    p1.edad = 20;
    p1.saludar();
    return 0;
}
💡 Ejemplo básico de clase con atributos y método.


🧩 5. Clase Libro
#include <iostream>
using namespace std;

class Libro {
public:
    string titulo, autor;
    int anio;

    void mostrarInfo() {
        cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nAño: " << anio << endl;
    }
};

int main() {
    Libro l1 = {"Cien Años de Soledad", "Gabriel García Márquez", 1967};
    l1.mostrarInfo();
    return 0;
}


🧩 6. Clase CuentaBancaria
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


🧩 7. Factorial recursivo
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


🧩 8. Potencia recursiva
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


🧩 9. Contar vocales con recursividad
#include <iostream>
#include <cstring>
using namespace std;

int contarVocales(const char *cadena, int i = 0) {
    if (cadena[i] == '\0') return 0;
    char c = tolower(cadena[i]);
    int esVocal = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    return esVocal + contarVocales(cadena, i + 1);
}

int main() {
    char texto[100];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 100);
    cout << "Cantidad de vocales: " << contarVocales(texto);
    return 0;
}


🧩 10. Implementar una pila (stack)
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
