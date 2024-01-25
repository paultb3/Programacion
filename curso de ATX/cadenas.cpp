#include <iostream>
#include <string.h>

using namespace std;
int main(){
    char words[]="";
    cout<<"ingrese caracteres"<<endl;
    cin>>words;

    int long_one= strlen(words);
    if(long_one>10)
    cout<<words;
    
    return 0;
}