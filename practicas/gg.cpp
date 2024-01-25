#include <iostream>

using namespace std;
int main(){
    int option;
    cout<<"seleccione el dia de entrenamiento";
    cout<<"---------------------------------";
    cout<<"1. Lunes";
    cout<<"3. miercoles";
    cout<<"5. viernes";
    
    switch (option)
    {
    case 1: {
        cout<<"pecho"<<endl;
    cout<<"espalda"<<endl;
    cout<<"cuello"<<endl;
     
    }break;
    
    case 3:{
    cout<<"pierna"<<endl;
    cout<<"pantorillas"<<endl;

    }
    
     break;
    case 5:{
       cout<<"pierna"<<endl;
    cout<<"pantorillas"<<endl; 
    }
    break;

    default: 
    cout<<"En este dia no se entrena";

    }
    return 0;
}