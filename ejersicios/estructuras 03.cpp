#include <iostream>

using namespace std;
struct Student
{
    char name[20];
    int age;
    int avegare;
};

void get_in(Student Student_one[3])
{
    ;
    for (size_t i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout << "nombre del "<<i+1<<" : ";
        cin.getline(Student_one[i].name, 20);
        cout << "edad del "<<i+1<<" : ";
        cin >> Student_one[i].age;
        cout << "promedio del "<<i+1<<" : ";
        cin >> Student_one[i].avegare;
        cout<<"---------------------------"<<endl;
    }
}

int main()
{
Student oter_students[3];
int average_max =0;
get_in(oter_students);

for (size_t i = 0; i < 3; i++)
{

if (oter_students[i].avegare >oter_students[average_max].avegare) //average_mas ayuda a mantener el indice
{
    average_max = i;//encuentra el indice que tieen el > valor
}
}
cout<<"nombre: "<<oter_students[average_max].name<<endl;
cout<<"edad: "<<oter_students[average_max].age<<endl;
cout<<"promedio mayor: "<<oter_students[average_max].avegare<<endl;
    return 0;
}