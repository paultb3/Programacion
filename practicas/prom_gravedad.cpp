#include <iostream>
#include <math.h>

using namespace std;
double Ingrese(){
    double number;
    cout<<"ingrese los numeros: "<<endl;
    cin>>number;
    return number;
}

double Gravity(double time){
    int lon_1 = 71;
    double pi=3.1416;
    double grav;
    grav = (4*(pow(pi,2))*lon_1)/pow(time,2)/100;
    return grav;
}

int main(){
    double time, answer;

    time = Ingrese();
    answer = Gravity(time);
    cout<<"la gravedad es: "<<answer<<endl;
    
    return 0;
}