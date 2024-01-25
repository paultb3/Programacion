#include <iostream>

using namespace std;
int main(){
    int variable=0, sum = 0,number, n;
    cout<<"ingrese la cantidad de numero a sumas: ";
    cin>>n;
    while (true)
    {
     cout<<"ingrese le numero "<<variable +1<<":";
      cin>> number;
      sum += number;
      variable++;
      if(variable==n)
      break;
    
    }
    cout<<"la suma de los  numero es: "<<sum <<endl;
    return 0;
}
