#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Fruit
{
    string name;
    int price;
};

int main()
{
    int amount;
    vector<Fruit> Vector_Fruit;

    cout << "ingrese la cantidad de frutas a ingresar:" << endl;
    cin >> amount;
    cin.ignore();//limpia buffe despues de recibir amount
    
    for (size_t i = 0; i < amount; i++)
    {
        fflush(stdin);
        cout << "ingrese el nombre de la " << i + 1 << " fruta: " << endl;
        getline(cin, Vector_Fruit[i].name);
        cout << "ingrese el precio: " << endl;
        cin >> Vector_Fruit[i].price;
        Vector_Fruit
    }
    return 0;
}