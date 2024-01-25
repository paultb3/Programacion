#include <iostream>

using namespace std;
int main(){
    int numeroA, numeroB, numeroC, max;
    cout<<"ingrese 3 numero: \n";
    cin>>numeroA>> numeroB>>numeroC;
    max = numeroA;

if(max<numeroB)
    max=numeroB;
if(max<numeroC)
    max= numeroC;
cout<<"el numero mayor es: "<<max;

   return 0;
}

