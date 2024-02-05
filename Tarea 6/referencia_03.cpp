#include <iostream>
#include <string>
using namespace std;
string words(string &one, string &two, string &three){
cout<<"ingrese tres nombres"<<endl;
cout<<"---------------------"<<endl;
string new_words[3];
cout<<"ingrese el primer nombre: ";cin>> one;
cout<<"ingrese el segundo nombre: ";cin>> two;
cout<<"ingrese el tercero nombre: ";cin>> three;
cout<<"los nombres  son: "<<"\n"<<one<<"\n"<<two<<"\n"<<three;
}

int main(){
    string one, two, three;
    words(one, two, three);

    return 0;
}