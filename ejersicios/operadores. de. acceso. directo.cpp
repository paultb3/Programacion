#include <stdio.h>
using namespace std;
int main(){
    int x=2;
    x = x *2;
    x*=2; // para simplificar la ecuacione: EL OPERADOR PRIMERO DEPSUES EL IGUAL
    x = x%4;
    x%=4;
    printf("la respusta es: %d \n",x);
    return 0;
}