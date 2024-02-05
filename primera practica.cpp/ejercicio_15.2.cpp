#include <iostream>
using namespace std;
int main(){
    int num;
    do {
        cout << "ingrese un # positivo: ";
        cin >> num;
    } while (num <= 0);
    cout << "# ingresado: " << num << endl;
    return 0;
}