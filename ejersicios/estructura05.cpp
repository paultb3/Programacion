#include <iostream>

using namespace std;
struct employee
{
    char name[20];
    float salary;
};

int main()
{
    int size_in;
    int position_max_salary = 0;
    int positin_min_salary = 0;

    cout << "ingrese la cantidad de empleados: ";
    cin >> size_in;

    employee very_employee[size_in];

    for (size_t i = 0; i < size_in; i++)
    {
        fflush(stdin);
        cout << "ingrese el nombre del " << i + 1 << " empleado: ";
        cin.getline(very_employee[i].name, 20);
        cout << "ingrese el salario: ";
        cin >> very_employee[i].salary;
        cout << "\n"
             << endl;
    }

    for (size_t i = 0; i < size_in; i++)
    {
        if (very_employee[i].salary > very_employee[position_max_salary].salary)
        {
            position_max_salary = i;
        }
    }

    for (size_t i = 0; i < size_in; i++)
    {
        if (very_employee[i].salary < very_employee[positin_min_salary].salary)
        {
            positin_min_salary = i;
        }
    }

    cout << "el empleado con mayor salario es: " << very_employee[position_max_salary].name;
    cout << " con " << very_employee[position_max_salary].salary << " soles." << endl;
    cout << "el empleado con menor salario es: " << very_employee[positin_min_salary].name;
    cout << " con " << very_employee[positin_min_salary].salary << " soles.";

    return 0;
}