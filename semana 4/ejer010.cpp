#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
    string word;
    int counter =0 ;
    cout << "ingrese una palabra" << endl;
    cout << "-------------------" << endl;
    cin >> word;
    string vowels = "aeiouáéíóú";
    for (size_t i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]); // tolower convirte los caracteres en minusculas
        if (vowels.find(word[i])!=-1)
        {
            counter++;
        }
    }
    cout << "la cantidad de volcales son: " << counter;
    return 0;
}