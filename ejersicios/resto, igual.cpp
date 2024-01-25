#include <stdio.h>
using namespace std;
int main(){  //el operado = solo asigna, más no es igual 
int j, k ,l ,m, residuo;
j = 10;
k=20;     //en todas las cituaciones el operador igual se esta usando para asiganr valores nada mas.
l = 3;
m = 8;
residuo= j%k;  // en el operador residuo no puede dividisrse un numero entre 0

printf("el reciduo es: %d",residuo);

    return 0;
}