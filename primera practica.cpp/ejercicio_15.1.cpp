#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
     int i = 1; 
   
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    cout << "La suma de 1 al 100 es: " << sum << endl;
    return 0;
}