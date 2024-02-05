#include <iostream>
using namespace std;
int sum(int &number_one, int &number_two){
 int suma=0;
 cout<<"ingrese el priemer numero: ";cin>>number_one;
 cout<<"ingrese el segundo numero: ";cin>>number_two;
 suma = number_one + number_two;
 cout<<"la suma es: "<<suma;
 return suma;

}
int main(){
int number_one, number_two;
sum(number_one, number_two);
return 0;
}