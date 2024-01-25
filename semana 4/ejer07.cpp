#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
int main()
{
    string accumulated = "";
    int numbers[10], size;
    cout << "ingrese la extension del vector" << endl;
    cin >> size;

    for (size_t i = 0; i < size; i++)
    {
        cout << i + 1 << ".digite un numero: \t";
        cin >> numbers[i];
    }

    for (size_t i = 0; i < size; i++) // recorre cada elemento de mi arreglo
    {
        string convert = to_string(numbers[i]);

        if (i == 0)
        {
            accumulated += convert;
        }
        else
        {
            int look = accumulated.find(convert); // el find busca la posicion.
            if (look == -1)                       // el -1 significa que no existe la letra, el elemento, el caracter .
                accumulated += convert;
            // continue; llega al codigo y cambia de iterador
        }
    }

    cout << "resultado: " << accumulated;

    return 0;
}
