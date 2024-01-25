#include <iostream>

using namespace std;
struct books
{
    char qualification[30];
    char author[20];
    int year_publication;
};

int main()
{
    int size_in;
    cout << "ingrese la cantidad de libros: ";
    cin >> size_in;
    books get_in[size_in];
    for (size_t i = 0; i < size_in; i++)
    {
        fflush(stdin);
        cout << "ingrese el nombre del libro "<<i+1<<": ";
        cin.getline(get_in[i].qualification, 30);
        cout << "autor: ";
        cin.getline(get_in[i].author, 20);
        cout << "año de publicación: ";
        cin >> get_in[i].year_publication;
        cout << "\n";
    }

    for (size_t i = 0; i < size_in; i++)
    {
        cout << "nombre del libro "<<i+1<<" :"<< get_in[i].qualification << endl;
        cout << "autor: " << get_in[i].author << endl;
        cout << " año publicacion " << get_in[i].year_publication<<endl;
        cout<<"\n";
    }

    return 0;
}