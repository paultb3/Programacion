#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int numbers[100],size;
    int new_number = 0;

    printf("Ingrese el tama%co del vector: \n",164);
    cin>>size;
    for(size_t i=0; i<size;++i){
        cout<<"ingrese el numero "<<i+1<<"\t";
        cin>>numbers[i];}
    new_number=numbers[0];
    for(size_t i=1; i<size;++i){

        if(numbers[i]>new_number){
            new_number=numbers[i];
        }
    }
   
    cout<<"el numero mayor es: "<<new_number;

    return 0;
}