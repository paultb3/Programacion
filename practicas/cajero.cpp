#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int number, options, number_cube;
    cout << "1: cubo de un numero" << endl;
    cout << "2: numero par o impar" << endl;
    cout << "3: salir" << endl;
    cout << "------------------" << endl;
    cout << "elija la opcion" << endl;
    cin >> options;

    switch (options)
    {
    case 1:
        cout << "ingrese un numero: " << endl;
        cin >> number;
        number_cube = pow(number,3);
        cout << "el cubo del nuemero es: " << number_cube;
        break;

    case 2:
        cout << "ingrese un numero: " << endl;
        cin >> number;
        if (number % 2 == 0)
        {
            cout << "en numero es par";
            break;
        }
        else
        {
            cout << "el numero es impar";
            break;
        }

    case 3:
        break;
    }
    return 0;
}