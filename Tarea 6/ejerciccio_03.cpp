#include <iostream>

using namespace std;

double division(int number_on, int number_two)
{
    double division_end;
    if (number_two != 0)
    {

        division_end = number_on / number_two;
        cout << "la division es: " << division_end;
    }
    else
        cout << "no se puede dividir, ingrese un denominador mayor a 0";
    return division_end;
}
int main()
{
    double number_one, number_two;
    cout << "ingrese el valor del NUMERADOR: ";
    cin >> number_one;
    cout << "ingrese el valor del DENOMINADOR: ";
    cin >> number_two;
    division(number_one, number_two);

    return 0;
}