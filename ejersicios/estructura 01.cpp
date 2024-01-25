#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct estructura_01
{
    char name[20];
    int age;
}one_person; // si hay dos variables lo separas con comas

int main(){
 
    cout<<"nombre 1: "<<endl;
    cin>>one_person.name;
    cout<<"edad 1: "<<endl;
    cin>>one_person.age;
    cout<<"nombre: "<<one_person.name<<endl;
    cout<<"edad: "<<one_person.age;

    
getch();
    return 0;
}