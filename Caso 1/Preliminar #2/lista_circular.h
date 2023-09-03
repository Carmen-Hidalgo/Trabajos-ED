/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 1/9/23
    descripción:  Métodos TAD de la lista circular que se van a implementar
*/

#include <iostream>

using namespace std;

struct Nodo { //La estructura para los nodos. Se tiene dos atributos
  int dato; //Número de dato
  string nombre; //Nombre de la nombre
  Nodo *next; //Se crea un nodo para apuntar al siguiente elemento

};

Nodo *cursor = NULL; //Se crea el cursor

bool vacia(){ //Muestra si la lista está vacía
  return cursor == NULL;
};

int cabeza(){ //El elemento señalado es el que está después

  return cursor->next->dato;

};

int cola (){ //El elemento señalado es el actual

  return cursor->dato;

};

void avanzar(){ //Avanza el cursor al siguiente elemento

  cursor = cursor->next;

};

void insertar(int numdato, string nomnombre) { //Se inserta un elemento después del cursor
  
  Nodo *newNodo = new Nodo; //Se crea un nuevo nodo
  newNodo->dato = numdato;
  newNodo->nombre = nomnombre;

  if (cursor == NULL) {
    newNodo->next = newNodo;
    cursor = newNodo;
  } else {

    newNodo->next = cursor->next;
    cursor->next = newNodo;   
  }
};

Nodo* remover() { //Se borra el elemento que se encuentra después del cursor

    Nodo *antiguo = cursor->next;
    Nodo *elementoEliminado = new Nodo;
    elementoEliminado->dato = antiguo->dato;
    elementoEliminado->nombre = antiguo->nombre;
    
    if (cursor == NULL) {
      return elementoEliminado = NULL;

    };

    if(antiguo == cursor){
      cursor = NULL;
      return elementoEliminado = NULL;
    }


    else
      cursor->next = antiguo->next;
    
    delete antiguo;

    cout<<"Elemento eliminado: "<< elementoEliminado->dato << ", " << elementoEliminado->nombre<<endl<<" "<< endl;

    return elementoEliminado;
};

void imprimirLista() { //Se imprime toda la lista
  if ( cursor == NULL) {
   cout << "La lista está vacía" << endl <<" "<< endl;
   return;
  }

  Nodo *actual = cursor;

  cout << "-----NOTICIAS-----"<< endl<< " "<< endl; 

  do {
    cout << actual->next->dato << ", " << actual->next->nombre<<endl;
    actual = actual->next;
  } while (actual != cursor);

  cout << endl;
};

int buscar(string palabraBusqueda){ //Se busca un valor en la lista basándose en una palabra clave

  Nodo *temp = cursor;
  do {
    cout<< "holaaa"<<endl;
    cout << temp->next->dato << ", " << temp->next->nombre<<endl;
    temp = temp->next;
  } while (temp->nombre == palabraBusqueda);

  while(temp->nombre == palabraBusqueda){
    cout<< "holaaa"<<endl;
    cout << temp->next->dato << ", " << temp->next->nombre<<endl;
    temp = temp->next;
  }

  cout<<endl;

};