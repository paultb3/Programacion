#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
int maximum = 100, minimum=1;
int v[20];
int addition = 0;
for(size_t i=0; i <20;i++)
v[i]=rand() %(maximum - minimum +1 ) + minimum;
for(size_t i=0;i<20;i++){
    if(v[i]%2==0)
    continue;
    addition+=v[i];
    cout<<v[i]<<"\t";
    
}
 cout<<"the addition is: "<<addition;
return 0;
}