
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
