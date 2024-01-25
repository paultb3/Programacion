#include <iostream>

using namespace std;
struct student
{
    char name[20];
    int age;
    float qualification;
};

int main()
{
    int size_new;

    cout << "ingrese la cantidad de alumnos: ";
    cin >> size_new;

    student group_students[size_new];

    for (size_t i = 0; i < size_new; i++)
    {
        fflush(stdin);
        cout << "ingres el nombre del "<<i+1<<" estudiante: ";
        cin.getline(group_students[i].name, 20);
        cout << "ingrese la edad:";
        cin >> group_students[i].age;
        cout << "ingrese la nota: ";
        cin >> group_students[i].qualification;
        cout << "\n";
    }

    for (size_t i = 0; i < size_new; i++)
    {
        cout << "nombre del " << i + 1 << " estudiante es: " << group_students[i].name << endl;
        cout << "la edad del " << i + 1 << " estudiante es: " << group_students[i].age << endl;
        cout<<"la nota del "<<i+1<<" estudiante es: "<<group_students[i].qualification<<endl;
        cout<<"\n";
    }   

    return 0;
}