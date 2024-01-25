#include <stdio.h>

using namespace std;
int main(){
    int i, j;
    i=4;
    j=2 *i++; //cuando el operador POSFIJO el contador se hace efectivo depues y no se incluye el incremento en la operacion
    i = 2* --j; // cuando el operador es PREFIJO el contador se hace efectivo antes y se incluye en la operacion
    printf("respuesta i: %d\n",i);
    printf("repsuesta j: %d",j);
    return 0;
}