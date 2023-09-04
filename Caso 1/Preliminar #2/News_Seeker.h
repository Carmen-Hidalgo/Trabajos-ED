/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 3/9/23
    description: Métodos para el Caso #1, The News Seeker
*/

#include <iostream>
#include "lista_circular.h"

using namespace std;


void top5Noticias(){ //Muestra las cinco nombres más relevantes

    Nodo *actual = cursor;

    cout << "-----TOP 5 NOTICIAS-----"<< endl<< " "<< endl;
    
    for(int i = 0; i < 5; i++){

        cout << actual->next->dato << ", " << actual->next->nombre<<endl;
        actual = actual->next;

    };
};

void nombresNoticias(){ //Muestra todas las nombres almacenadas

    imprimirLista();
};

//void mostrarPatron(string listaPalabrasClave); //Mostrar nombres que contegan palabras de una lista clave
//ocupa los métodos: buscar(string palabraBusqueda), imprimir(Node* cursor)

//void eliminarPatron(string listaPalabrasClave); //Borrar nombres que contegan palabras de una lista clave
//ocupa los métodos:
//buscar(string palabraBusqueda)
//imprimir(Node* cursor)

//void reubicarnombre(string nombrenombre, int Positivo_o_Negativo); //Subir o bajar una nombre de dato
//ocupa los métodos:
//buscar(string palabraBusqueda)
//remover(string nombrenombre, int posicionAntigua)
//insertar(string nombrenombre, int posicionNueva)

