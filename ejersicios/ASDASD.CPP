#include <iostream>
#include <vector>

using namespace std;

const int NUM_ESTUDIANTES = 3;  // Puedes cambiar este valor según tus necesidades

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int calificaciones[5];  // Supongamos que cada estudiante tiene 5 calificaciones
    float promedio;
};

int main() {
    vector<Estudiante> estudiantes(NUM_ESTUDIANTES);

    // Ingresar datos para cada estudiante
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].nombre;

        cout << "Ingrese las calificaciones del estudiante " << i + 1 << " (5 calificaciones): ";
        for (int j = 0; j < 5; ++j) {
            cin >> estudiantes[i].calificaciones[j];
        }
    }

    // Calcular el promedio para cada estudiante
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        float suma = 0;

        for (int j = 0; j < 5; ++j) {
            suma += estudiantes[i].calificaciones[j];
        }

        estudiantes[i].promedio = suma / 5;
    }

    // Mostrar los resultados
    cout << "\nResultados:\n";
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        cout << "Estudiante " << estudiantes[i].nombre << ": Promedio = " << estudiantes[i].promedio << "\n";
    }

    return 0;
}