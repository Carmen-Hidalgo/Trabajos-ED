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

    insertar(1, "Asalto a las 10pm");
    insertar(2, "Lluvia fuerte en San José");
    insertar(3, "Luz se fue en ciertas zonas");
    insertar(4, "Concierto en Parque Viva");
    insertar(5, "Avance científico en vacunas");
    insertar(6, "en");

    imprimirLista();

    avanzar();
    
    imprimirLista();

    avanzar();

    imprimirLista();

    remover();

    imprimirLista();

    remover();

    imprimirLista();

    buscar("en");

};