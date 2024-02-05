#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int find_out()
{
    int counter = 0, counter_consonants = 0;
    char words[] = {"aloemijkolawdufsa"};
    char vowels[] = {"aeiou"};
    char consonants[] = {"bcdfghjklmnñpqrstvwxyz"};
    for (size_t i = 0; i < strlen(words); i++) //el metodo strlen se usa para saber el tamaño de la cadena de chars
    {
        for (size_t j = 0; j < strlen(vowels); j++)
        {
            if (words[i] == vowels[j])
                counter += 1;
        }

        for (size_t k = 0; k < strlen(consonants); k++)
        {
            if (words[i] == consonants[k])
                counter_consonants += 1;
        }
    }

    cout << "la cantidad de vocales es: " << counter << endl;
    cout << "la cantidad de consonantes es: " << counter_consonants;
    return counter, counter_consonants;
}

int main()
{
    find_out();
    return 0;
}