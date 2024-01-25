#include <iostream>

using namespace std;
int multiplication(int a, int b){
    int mult;
    mult = a*b;
    cout<<"La multiplicacion es: "<<mult;
    return mult;
}

int main(){
int number_one, number_two;
cout<<"ingrese un numero: ";
cin>>number_one;
cout<<"ingrese un numero: ";
cin>>number_two;
multiplication(number_one,number_two);

    return 0;
}