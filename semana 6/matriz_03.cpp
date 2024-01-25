#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
void Get_in(int &rows, int &columns)
{

    cout << "ingrese la cantidad de filas:" << endl;
    cin >> rows;
    cout << "ingrese la cantidad de columnas:" << endl;
    cin >> columns;
}

int main()
{
    int rows, columns;
    string suma = "";

    Get_in(rows, columns);
    string words[rows][columns];

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cout << "ingrese una palabra " << endl;
            cin >> words[i][j];
        }
    }

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            suma += words[i][j];
        }
    }

    cout << "la cadena final es: " << suma;

    getch();

    return 0;
}