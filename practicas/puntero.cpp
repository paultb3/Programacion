#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int>new_Vector;
    new_Vector.push_back(2);
    new_Vector.push_back(3);
    new_Vector.push_back(4);
    new_Vector.push_back(6);
    new_Vector.push_back(10);
    int*p= &new_Vector[0]; //usando punteros 
    for (size_t i = 0; i < new_Vector.size(); i++)
    {
        cout<<(p+i)<<" "; 
    }
    
    return 0;
}