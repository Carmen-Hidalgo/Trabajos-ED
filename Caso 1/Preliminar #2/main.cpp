/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 1/9/23
    descripción: Pruebas
*/

#include "lista_circular.h"

using namespace std;


int main(int argc, char *argv[])
{
    imprimirLista();

    insertar(1, "hola");
    insertar(2, "mi");
    insertar(3, "nombre");
    insertar(4, "es");
    insertar(5, "Carmen");

    imprimirLista();

    remover(3);

    imprimirLista();

};