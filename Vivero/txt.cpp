#include <iostream>
#include <stdlib.h>
#include <fstream> //reacion y escritura de achivos

using namespace std;

void rtg_words()
{
    ofstream data_base;                     // es similiar al int suma; ofstream es u ntipo de dato
    data_base.open("prueba.txt", ios::out); // despues de la coma va el modo de como vamos usar el texto
    if (data_base.fail())
    {
        cout << "no se pudo abri el archivo";
        exit(1); // es paras salir del programa rapido, libreria stdlib.h
    }
    else
    {

        data_base << "my name is paul, and you?";
        data_base.close(); // cierra el archivo
    }
};

int main()
{
    rtg_words();
    return 0;
}