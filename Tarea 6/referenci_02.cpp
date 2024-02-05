#include <iostream>
using namespace std;
int Product_new(int &a, int &b, int &c){
    int prodt= 0;
    cout<<"ingrese el primer valor: ";cin>>a;
    cout<<"ingrese el segundo valor: ";cin>>b;
    cout<<"ingrese el tercero valor:";cin>>c;
    prodt = a *b * c;
    cout<<"el producto es: "<<prodt<<endl;
    return prodt;
}
int main(){
int one_number,two_number, three_number;
Product_new(one_number,two_number,three_number);
    return 0;
}