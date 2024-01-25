#include <iostream>
#include <ctime>

using namespace std;
int main()
{

    // obtener la fecha del sistema
    time_t tiempoActual = time(0);
    tm *fecha = localtime(&tiempoActual);

    // formatear y mostrar fecha
    if (fecha != nullptr)
    {
        int dia = fecha->tm_mday;
        int mes = fecha->tm_mon + 1;      // el mes se representa
        int anio = fecha->tm_year + 1900; // se ajusta el ano

        cout << "fecha del sistema: "<<endl;
        cout << (dia < 10 ? "o" : "")<<dia<<"-";
        cout << (mes < 10 ? "o" : "")<<mes<<"-";
        cout<<anio<<endl;
    }else
    cerr<<"no s epudo obtener la fecha";

    return 0;
}