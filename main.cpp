#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    ArregloDinamico<string> arreglo;

    // agregar 4 string's a arreglo usando insertar_final e insersar_inicio()
    arreglo.insertar_final("Dissidia");
    arreglo.insertar_final("Final");
    arreglo.insertar_inicio("Fantasy");
    arreglo.insertar_inicio("Opera");

    // mostrar() los elementos de arreglo
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    // insertar() el elemento en la posición 2
    arreglo.insertar("100",2);

    // mostrar los elementos de arreglo
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    // eliminar_inicio() y eliminar_final()
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();

    // eliminar() el elemento de la posición 1
    arreglo.eliminar(1);

    // mostrar() los elementos de arreglo
    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    return 0;
}