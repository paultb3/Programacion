#include <iostream>

using namespace std;

int distancia(int v, int t){
    int r = v*t;
 return r;
}
int ingreso(){
    int r;
    cout<<"ingrese un numero: ";
    cin>>r;

    return r;
}

void mostrar(int v, int t, int d){ //no devuelve valor
cout<<"el producto de: "<<v<<" * "<<t<<" = "<<d;
}

int main(){
int v,t, d;
v=ingreso();
t=ingreso();
d = distancia(v,t);
mostrar(v,t,d);

    return 0;
}

