#include <iostream>

using namespace std;
int main(){
int new_vector[5];
int numbers[5];

cout<<"ingrese los 5 valores de tu vector"<<endl;

for (size_t i = 0; i < 5; i++)
{
    cout<<"ingrese el "<<i+1<<" numero: "<<endl;
    cin>>numbers[i];
}
for (size_t i = 0; i < 5; i++)
{
    new_vector[i]= numbers[i]*2;
}
cout<<"los valores del nuevo vector son"<<endl;
for (size_t i = 0; i < 5; i++)
{
    cout<<new_vector[i]<<" ";
}



    return 0;
}