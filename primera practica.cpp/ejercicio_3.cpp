#include <iostream>

using namespace std;
int main()
{
    double big = 1.2356e6;

    double small = 1e-4;//e= 2.71828

    cout << fixed << big + small;//fixed: imprime numeros en punto fijo
    return 0;
}