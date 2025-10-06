

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

