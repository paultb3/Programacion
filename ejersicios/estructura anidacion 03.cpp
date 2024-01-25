#include <iostream>
#include <conio.h>

using namespace std;
struct info
{
    char address[30];
    char city[20];
    char province[20];
};

struct employee
{
   char name[20];
   struct info of_employee;
   double salary;
   
   
};                   //arreglo de estructuras, en cada posicions e guarda una estructura completa

int main (){
employee employee_s[2];
for (size_t i = 0; i < 2; i++)
{
    fflush(stdin); //vacia el buffer y permite digitar valores
    cout<<"digite el nombre del "<<i+1<<" empleado"<<endl;
    cin.getline(employee_s[i].name,20);
    cout<<"digite su direccion"<<endl;
    cin.getline(employee_s[i].of_employee.address,30);
    cout<<"digite su ciudad: "<<endl;
    cin.getline(employee_s[i].of_employee.city,20);
    cout<<"digite la provincia"<<endl;
    cin.getline(employee_s[i].of_employee.province,20);
    cout<<"ingrese el salario"<<endl;
    cin>>employee_s[i].salary; 
    cout<<"\n";
}
for (size_t i = 0; i < 2; i++)
{
   cout<<"nombre: "<<employee_s[i].name<<endl;
   cout<<"direccion: "<<employee_s[i].of_employee.address<<endl;
   cout<<"ciudad: "<<employee_s[i].of_employee.city<<endl;
   cout<<"provicia: "<<employee_s[i].of_employee.province<<endl;
   cout<<"slario: : "<<employee_s[i].salary<<endl;
   

}


    getch();
    return 0;
}