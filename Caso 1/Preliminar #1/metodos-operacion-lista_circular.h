/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 25/8/23
    description:  Métodos de operación para lista circular 
*/

#include <iostream>
#include "metodos-TAD-lista_circular.h"

using namespace std;

void CircleList::add(const Elem& elemento) { //Agregar un elemento
    CNode* nuevoNodo = new CNode; //Se crea un nuevo nodo
    nuevoNodo->elem = elemento;

    if(cursor == NULL){ //Si la lista está vacía
        nuevoNodo->next = nuevoNodo; //el nodo creado se apunta a sí mismo
        cursor = nuevoNodo; //el cursor apunta al nodo creado
    }
    else { //Si la lista no está vacía
        nuevoNodo->next = cursor->next; //el nuevo nodo se agrega después del cursor
        cursor->next = nuevoNodo;
    }
}

void CircleList::remove() { //se remueve el nodo después del cursor
    
	//Se le asigna un nodo al valor que está después del cursor, que es el que se quiere borrar
	CNode* antiguo = cursor->next; 

    if (cursor != NULL){ //Si el cursor no está vacío

        if(antiguo == cursor) //Si el nodo antiguo es el último de la lista
            cursor = NULL; //La lista ahora está vacía
		else
            cursor->next = antiguo->next; //Se saca al nodo antiguo de la lista
        delete antiguo; //Se borra el nodo
    }
}

//Se busca un elemento en la lista basándose en una palabra
void CircleList::buscar(const Elem& elemento){

//Se necesitan utilizar los métodos: advance(), front(), back(), empty()

}

//Reordena los valores en la lista de forma ascendiente
void CircleList::reordenar(){

//Se necesitan utilizar los métodos: advance(), front(), back()

}

//Se imprimen los valores de la lista
void CircleList::imprimir(){

//Se necesitan utilizar los métodos: advance(), back(), empty()

}