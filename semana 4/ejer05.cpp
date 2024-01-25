#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
    string word, Final = "";
    int number;

    cout << "ingrese una palabra: " << endl;
    cin >> word;
    cout << "ingrese la clave del cifrado " << endl;
    cin >> number;
    string letters = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
    for (size_t i = 0; i < word.length(); ++i)
    {
        char letter = word[i];
        letter = toupper(letter);
        int position = letters.find(letter); //find=buscar
        position = position + number;
        char newLetter = letters[position];
        Final += newLetter;
    }

    cout << "la encriptacion es: " << Final;

    return 0;
}