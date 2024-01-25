#include <iostream>
#include <vector>

using namespace std;

int number_prime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int star, final;
    cout << "Ingrese el numero inicial: ";
    cin >> star;
    cout << "Ingres el nuemro final: ";
    cin >> final;

    vector<int> prime;

    for (int num = star; num <= final; ++num)
    {
        if (!number_prime(num))
        {

            continue;
        }
        prime.push_back(num);
    }

    // Imprimir los números primos
    cout << "Numeros primos en el intervalo [" << star << ", " << final << "]: ";
    for (int prim : prime)
    {
        cout << prim << " ";
    }
    cout << endl;

    return 0;
}