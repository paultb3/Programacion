#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> new_Vector(10, 0);

    // Solicitar al usuario ingresar los números y almacenarlos en el vector
    for (size_t i = 0; i < new_Vector.size(); i++) {
        cout << "Ingrese el " << i + 1 << " numero: ";
        cin >> new_Vector[i];
    }

    // Ordenar el vector de manera ascendente utilizando sort
    sort(new_Vector.begin(), new_Vector.end());

    // Imprimir los números ordenados
    cout << "Números ordenados de manera ascendente: ";
    for (size_t i = 0; i < new_Vector.size(); i++) {
        cout << new_Vector[i] << " ";
    }

    return 0;
}