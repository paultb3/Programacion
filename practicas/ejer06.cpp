#include <iostream>

using namespace std;

int Suma(int one, int two, int three, int four, int five){
    int suma;
    suma = one + two + three + four + five;
    return suma;
}

int Ingreso(){
    int numbers;
    cout<<"ingrese un numero ";
    cin>>numbers;
    return numbers;
}

int main(){
 int a, b, c, d, e;
 int new_suma;

 a = Ingreso();
 b = Ingreso();
 c = Ingreso();
 d = Ingreso();
 e = Ingreso();

 new_suma = Suma(a,b,c,d,e);
 cout<<"la suma es: "<<new_suma;

    return 0;
}