
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
