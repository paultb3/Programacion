#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string word, reverse = "";
    int size;
    cout << "ingrese la palabra: "; // ingrese una palabra
    cin >> word;
    size = word.length();
    for (size_t i = size - 1; i < size; --i)
    {
        char character = word[i];
        reverse += character; // acumula los caracteres al reves
    }

    if (word == reverse)
    {
        cout << "es PALINDROMO"; // ES PALINDROMA
    }
    else
    {
        cout << "no es PALINDROMO"; // no es palindroma
    }

    return 0;
}
