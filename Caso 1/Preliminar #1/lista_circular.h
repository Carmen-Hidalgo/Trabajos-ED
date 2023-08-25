/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 25/8/23
    descripción:  Métodos TAD de la lista circular que se van a implementar
*/


#include <iostream>

using namespace std;

bool vacia(); //Revisar si la lista está vacía

string cabeza(); //Retorna elemento al que apunta el nodo

string cola(); //Retorna elemento que está después del nodo

void avanzar(); //Avanzar en la lista

void insertar(string nombreNoticia, int numeroRelevancia); //Agregar un elemento

void remover(); //Se borra el elemento

void buscar(string palabraBusqueda); //Se busca un valor en el arreglo basándose en una palabra clave

Node* reordenar(Node* cola); //Se reordena arreglo de forma ascendiente

void imprimir(Node* cabeza; int numRelevancia); //Se imprimen los valores del arreglo