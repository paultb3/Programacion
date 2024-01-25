#include <iostream>

using namespace std;
int main()
{
    int matrix_one[3][3] = {{2, 3, 5},
                            {4, 5, 6},
                            {8, 1, 7}};

    int matrix_two[3][3] = {{3, 6, 1},
                            {6, 1, 8},
                            {8, 1, 10}};

    int matrix_end[3][3];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matrix_end[i][j] = 0;
        }
    }

    for (size_t i = 0; i < 3; i++) // recorre filas
    {
        for (size_t j = 0; j < 3; j++) // recorre columnas
        {
            for (size_t z = 0; z < 3; z++)
            {
                matrix_end[i][j] = matrix_end[i][j] + matrix_one[i][z] * matrix_two[z][i];
            }
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << matrix_end[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
