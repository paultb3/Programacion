#include <iostream>
#include <vector>

using namespace std;
struct qualification
{
    char name[20];
    float qualifica[5];
    float prom;
};

int main()
{
    int size_new;

    cout << "ingrese la cantidad de alumnos: ";
    cin >> size_new;

    vector<qualification> student(size_new);

    for (size_t i = 0; i < size_new; i++)
    {
        fflush(stdin);
        cout << "ingrese el nombre del " << i + 1 << " estudiante: ";
        cin.getline(student[i].name, 20);

        for (size_t j = 0; j < 5; j++)
        {
            cout << "ingrese la " << j + 1 << " nota ";
            cin >> student[i].qualifica[j];
        }
    cout<<"\n";
    }
    for (size_t i = 0; i < size_new; i++)
    {
        float addition = 0;
        for (size_t j = 0; j < 5; j++)
        {
            addition += student[i].qualifica[j];
        }
        student[i].prom = addition / 5;
    }

    for (size_t i = 0; i < size_new; i++)
    {
        cout << "el estudiante " << student[i].name << " tiene un pomedio de: " << student[i].prom;
        cout<<"\n";
    }

    return 0;
}