/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 25/8/23
    description:  Métodos del TAD lista circular que se van a implementar
*/


#include <iostream>

using namespace std;

typedef string Elem; //Se determina el tipo de elemento
class CNode { //Se crea el nodo
private:
    Elem elem; //Valor del elemento
    CNode* next;

    friend class CircleList; //Se puede acceder la clase CircleList access
};

class CircleList { //Lista circular
    public:
        CircleList(); //constructor
        ~CircleList(); //destructor
        bool empty() const; //Pregunta si la lista está vacía
        const Elem& front() const; //elemento que está en el cursor
        const Elem& back() const; //elemento que está después del cursor
        void advance(); //se avanza el cursor
        void add(const Elem& e); //se agrega un elemento después del cursor
        void remove(); //se remueve el nodo después del cursor
        void buscar(const Elem& e); //buscar un elemento de la lista
        void reordenar(); //reordenar elementos de la lista
        void imprimir(); //imprimir todos los elementos de la lista

    private:
        CNode* cursor; //el cursor
};

CircleList::CircleList() //constructor
    : cursor(NULL){ }

CircleList::~CircleList() { //destructor
    while (!empty()) remove();
}

bool CircleList::empty() const { //Si la lista está vacía
    return cursor == NULL;
}

const Elem& CircleList::back() const { //elemento que está en el cursor
    if (cursor != NULL) //Si la lista no está vacía
    return cursor->elem;
}

const Elem& CircleList::front() const { //elemento que está después del cursor
    if (cursor != NULL) //Si la lista no está vacía
        return cursor->next->elem;
}

void CircleList::advance() { //se avanza el cursor
     if (cursor != NULL) //Si la lista no está vacía
        cursor = cursor->next; 
}
