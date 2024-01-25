#include <iostream>
#include <math.h>
using namespace std;
int binomial(int a, int b, int c)
{
    int  discriminating, answer_one, answer_two;
    discriminating = sqrt(pow(b, 2) - 4 * a * c);
    cout<<discriminating;
    if (discriminating > 0)
    {
        answer_one = (-b + discriminating) / 2 * a;
        answer_two = (-b - discriminating) / 2 * a;
        cout << "la primera raiz es: " << answer_one << endl;
        cout << "la segunda raiz es: " << answer_two;
    }
    else if (discriminating = 0)
    {
        answer_one = answer_two;
        cout << "la raiz unica es: " << answer_one;
    }
    else
        cout << "no hay solucion real";

    return answer_one;
    return answer_two;
}
int main()
{
    int a, b, c;
    cout<<"ingrese los coeficientes de un polinomio cuadratico: "<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout << "ingrese el coeficiente A: ";
    cin >> a;
    cout << "ingrese el coeficiente B: ";
    cin >> b;
    cout << "ingrese el coeficiente C: ";
    cin >> c;
    cout<<"\n";
    binomial(a, b, c);
    return 0;
}