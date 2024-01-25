#include <iostream>
#include <stdio.h>
#include <cctype>
#include <string>

using namespace std;
int main()
{
    int count = 0, bug_Count = 0, answer_One, answer_Two, answer_Five;
    char answer_Three, answer_Four;

    printf("1. Si los catetos de un triangulo rectangulo son 3 Y 4. %cCual es la hipotenusa?:\n", 168);
    cin >> answer_One;
    if (answer_One == 5)
    {
        cout << "correto" << endl;
        count++;
    }
    else
    {
        cout << "incorrecto" << endl;
        bug_Count++;
    }
    printf("2. %cEn que a%co fue la independecia del per%c?:\n", 168, 164, 163);
    cin >> answer_Two;
    if (answer_Two == 1821)
    {
        cout << "correto" << endl;
        count++;
    }
    else
    {
        cout << "incorrecto" << endl;
        bug_Count++;
    }

    printf("3. %cIOSTREAM,CONIO y STDLIB, son variables de c++?: (verdadero= v /falso = f) \n", 168);
    cin >> answer_Three;
    answer_Three = tolower(answer_Three);
    if (answer_Three == 'f')
    {
        cout << "correto" << endl;
        count++;
    }
    else
    {
        cout << "incorrecto" << endl;
        bug_Count++;
    }

    printf("4. %cLos discos duros no almacenan informaci%cn en ceros y unos?: (verdadero= v /falso = f) \n", 168, 162);
    cin >> answer_Four;
    answer_Three = tolower(answer_Four);
    if (answer_Four == 'f')
    {
        cout << "correto" << endl;
        count++;
    }
    else
    {
        cout << "incorrecto" << endl;
        bug_Count++;
    }

    printf("4. %cEl %cnico fundador de Apple fue Steve Jobs?: (verdadero= v /falso = f) \n", 168, 163);
    cin >> answer_Five;
    answer_Three = tolower(answer_Five);
    if (answer_Five == 'f')
    {
        cout << "correto" << endl;
        count++;
    }
    else
    {
        cout << "incorrecto" << endl;
        bug_Count++;
    }
    cout << "----------------------------------" << endl;
    cout << "respuestas correctas: " << count << endl;
    cout << "respuestas incorrectas: " << bug_Count << endl;

    return 0;
}