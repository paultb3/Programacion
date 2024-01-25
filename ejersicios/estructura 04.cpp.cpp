#include <iostream>
#include <string.h>

using namespace std;
struct Runner
{
   char name[20];
   int age;
   char sex;
   char club[20];
};

void ret_tt(Runner &person_1){
    cout<<"nombre:"<<endl;
    cin.getline(person_1.name,20);
    cout<<"ingrese la edad"<<endl;
    cin>>person_1.age;
    cout<<"sexo (M = masculino - F = fememnino): "<<endl;
    cin>>person_1.sex;
    cout<<"nombre del club: "<<endl;
    fflush(stdin);
    cin.getline(person_1.club,20,'\n');
}

int main(){
    char category[20];
    Runner one_run; 
    ret_tt(one_run);
    
    if (one_run.age <= 18)
    {
        strcpy(category,"juvenil");
    }
    else if(one_run.age <= 40){
        strcpy(category,"adulto");
    }
    else
    strcpy(category,"beterano");

    cout<<"datos del correrdor:"<<endl;
    cout<<"nombre: "<<one_run.name<<endl;
    cout<<"Edad: : "<<one_run.age<<endl;
    cout<<"sexo: "<<one_run.sex<<endl;
    cout<<"nombre del club: "<<one_run.club<<endl;
    cout<<"categoria: "<<category;

 return 0;
    
}