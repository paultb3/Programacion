#include <iostream>

using namespace std;
int main()
{
    int number;
    cout << "ingrese un numero: " << endl;
    cin >> number;

    while (number != 1) // si number==1, entonces el bucle se detiene
    {
        if (number % 2 == 0)
        {
            number = number / 2;

            cout << number << "\n";
        }
        else
        {
            number = (number * 3) + 1;
            cout << number << "\n";
    }
        }

    return 0;
}