

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

