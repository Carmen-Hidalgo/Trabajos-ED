/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 3/9/23
    descripción: Métodos TAD de la lista circular que se van a implementar
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

struct Nodo { //La estructura para los nodos. Se tiene dos atributos
  int dato; //Número de dato
  string nombre; //Nombre de la nombre
  Nodo *next; //Se crea un nodo para apuntar al siguiente elemento
  Nodo *prev; //Se crea un nodo para apuntar al elemento previo

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

void avanzar(int veces){ //Avanza el cursor al elemento que se solicite

  for (int i = 0; i < veces; i++){
  
  cursor = cursor->next;

  };

};

void insertar(int numdato, string nom) { //Se inserta un elemento después del cursor
  
  Nodo *newNodo = new Nodo; //Se crea un nuevo nodo
  newNodo->dato = numdato;
  newNodo->nombre = nom;

  if (cursor == NULL) {
    newNodo->next = newNodo;
    cursor = newNodo;
  } else {
    newNodo->next = cursor->next;
    cursor->next = newNodo;   
  }
};

Nodo *elementoEliminado = new Nodo;

Nodo* remover() { //Se borra el elemento que se encuentra después del cursor

    Nodo *antiguo = cursor->next;
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

    return elementoEliminado;
};

void imprimirLista() { //Se imprime toda la lista

  if ( cursor == NULL) {
   cout <<endl<< "La lista está vacía" << endl <<" "<< endl;
   return;
  }

  Nodo *actual = cursor;

  cout <<endl<< "-----NOTICIAS-----"<< endl<< " "<< endl; 

  do {
    cout << actual->next->dato << ", " << actual->next->nombre<<endl;
    actual = actual->next;
  } while (actual != cursor);

  cout << endl;
};

int buscar(string palabraBusqueda){ //Se busca un valor en la lista basándose en una palabra clave

  Nodo *temp = cursor;
  int positionReciente = 0;
 
   do {
    
    if (cursor != NULL){

      bool esta = temp->nombre.find(palabraBusqueda) != string::npos; 
      //Busca si la palabra se encuentra en el string antes del final de esta

        if(esta){
        
          cout<<"Elemento encontrado: "<<temp->dato << ", " << temp->nombre <<endl;
          positionReciente = temp->dato;

        }

      temp = temp->next;
    }

  } while (temp != cursor);

  return positionReciente; //La posición del último elemento de la lista de búsqueda

};