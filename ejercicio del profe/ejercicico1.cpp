#include <iostream>

using namespace std;
struct perro
{
   string name;
   int age;
   string race;
}p1;

int main(){

perro p2;
cout<<"ingrese la edad: "<<endl;
cin>>p2.age;
cout<<"ingrese el nombre: "<<endl;
cin>>p2.name;
    return 0;
}