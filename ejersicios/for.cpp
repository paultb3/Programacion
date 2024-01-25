#include <iostream>

using namespace std;
int main(){ 
    int sum=0;
    for(int i=1;i<20;i = i+ 1){
        cout<<i++;
        sum = sum + i;
    }
    cout<<"La suma de los elementos es:"<<sum;
    return 0;
}