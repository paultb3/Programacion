#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    string suma = "";
    int medium_size;

    cout << "ingrese el tamaño del vector" << endl;
    cin >> medium_size;

    vector<string> word_new = {medium_size, ""};

    for (size_t i = 0; i < word_new.size(); i++)
    {
        cout << "ingrese la " << i + 1 << " palabra:" << endl;
        cin >> word_new[i];
        suma += word_new[i];
    }

    cout << "La cadena final es: " << suma;

    return 0;
}