#include <iostream>

using namespace std;

int ingresar_dato(int seize_1,int numbers); //prototipo
int main(){
    int size_1; 

    cout<<"ingrese el tamño del vector: ";
    cin>>size_1;
    
    int numbers[size_1];
   for (size_t i = 0; i < size_1; i++)
   {
    cout<<"ingrese el "<<i+1<<" numero: "<<endl;
   }
   
    return 0;
}

int ingresar_dato(int size_1, int numbers);//funcion
   

