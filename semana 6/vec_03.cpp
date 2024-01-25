#include <iostream>
#include <cctype>
#include <string.h>
#include <vector>

using namespace std;
int main(){
    char only_word;
    int counter= 0;
    
    cout<<"ingrese un caracter:"<<endl;
    cin>>only_word;

    vector<char>very_words={'a','m','b','o','c','a','i','e','u','a','i','o'};
    for (size_t i = 0; i < very_words.size(); i++)
    {
        if(only_word==very_words[i])
        counter++;
        else
        continue;
    }
    
    cout<<"se repite "<<counter<<" veces";
    return 0;
}
