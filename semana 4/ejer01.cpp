#include <iostream>

using namespace std;
int main()
{
    int addition, average, numbers[10], counter = 0;

    for (size_t i = 0; i < 10; i++)
    {
        cout << "ingrese el  numero " << i + 1 << " : \n "; /*ingrese los nume
                                                                    ros entero*/
        cin >> numbers[i];
        addition += numbers[i];
    }
    average = addition / 10; // average es el promedio de los numeros
    for (size_t i = 0; i < 10; i++)
    {
        if (numbers[i] > average) /*verifica si alguno de los
                                    numero ingresados es mayor al promedio*/
        {
            counter++; // cuentador. Si la condicion es verdades, suma.
        }
    }
    cout << "promedio: " << average << endl;                        // imprime el promedio
    cout << "cantidad de numeros mayores al promedio: " << counter; // cantida de numero mayores al promedio son:
    return 0;
}