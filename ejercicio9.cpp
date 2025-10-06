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
