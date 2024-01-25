#include <iostream>

using namespace std;
int main()
{
    int dimension;
    cout << "ingrese la dimension de la matriz: " << endl; 
    cin >> dimension;
    int matrix[dimension][dimension];
    
    cout << "ingrese los numeros de la matriz: " << endl; 
    for (size_t i = 0; i < dimension; ++i)
    {
        for (int j = 0; j < dimension; ++j)
        {
            cout << "matriz " << i +1<< "*" << j +1<< ":"; // matriz
            cin >> matrix[i][j];
        }
    }

    cout << "Matriz ingresada: " << endl; // matriz ingresada
    for (int i = 0; i < dimension; ++i)
    {
        for (int j = 0; j < dimension; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;

    }
    cout<<"------------------------"<<endl;
    cout << "matriz TRANSPUESTA: " << endl; // la matriz TRANSPUESTA es:
    for (int j = 0; j < dimension; ++j)
    {
        for (int i = 0; i < dimension; ++i) /*al iterar primero j, y despues i.
        Ivertimos el orden de los valores que tomara y al imprimir*/
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
