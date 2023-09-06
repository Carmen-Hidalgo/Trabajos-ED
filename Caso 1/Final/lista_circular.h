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
  string nombre; //Nombre de la noticia
  string fecha; //Fecha de la noticia
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

void avanzar(int veces){ //Avanza el cursor al elemento que se solicite

  for (int i = 0; i < veces; i++){
  
  cursor = cursor->next;

  };

};

void insertar(int numdato, string nom, string date) { //Se inserta un elemento después del cursor
  
  Nodo *newNodo = new Nodo; //Se crea un nuevo nodo
  newNodo->dato = numdato;
  newNodo->nombre = nom;
  newNodo->fecha = date;
  newNodo->next = NULL;

  if (cursor == NULL) { //Si lista está vacía
    cursor = newNodo;
    newNodo->next = cursor;
  } else { //Si ya hay elementos en la lista
    Nodo *temp = cursor;

      while(temp->next != cursor)
        temp = temp->next;

      temp->next = newNodo;
      newNodo->next = cursor;
  };
};

Nodo *elementoEliminado = new Nodo;

Nodo* remover() { //Se borra el elemento que se encuentra después del cursor

    Nodo *antiguo = cursor->next;
    elementoEliminado->dato = antiguo->dato;
    elementoEliminado->nombre = antiguo->nombre;
    elementoEliminado->fecha = antiguo->fecha;
    
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

void revLista(){

  if(cursor != NULL){

    Nodo *prevNodo = cursor;
    Nodo *tempNodo = cursor;
    Nodo *curNodo = cursor->next;

    prevNodo->next = prevNodo;

    while(curNodo != cursor){

      tempNodo =curNodo->next;
      curNodo->next = prevNodo;
      cursor->next = curNodo;
      prevNodo = curNodo;
      curNodo = tempNodo;

    }

    cursor = prevNodo;
    
  }

};

void imprimirLista() { //Se imprime toda la lista

  Nodo *actual = cursor;

  if (actual != NULL){
    cout <<endl<< "-----NOTICIAS-----"<< endl<< " "<< endl;

    while(true){
      cout << actual->dato << ", " << actual->nombre<< ", " << actual->fecha <<endl;
      actual = actual->next;

      if(actual == cursor)
        break;
    };
    
    cout <<endl;
  } else{
    cout <<endl<< "La lista está vacía.\n";
  };

};

int buscar(string palabraBusqueda, string date){ //Se busca un valor en la lista basándose en una palabra clave

  Nodo *temp = cursor;
  int positionReciente = 0;
 
   do {
    
    if (cursor != NULL){

      bool esta = temp->nombre.find(palabraBusqueda) != string::npos; 
      //Busca si la palabra se encuentra en el string antes del final de esta

      bool encontrada = temp->fecha.find(date) != string::npos;

        if(esta){
        
          if(encontrada){

            cout<<"Elemento encontrado: "<<temp->dato << ", " << temp->nombre << ", " << temp->fecha <<endl;
            positionReciente = temp->dato;
          
          }

        }

      temp = temp->next;
    }

  } while (temp != cursor);

  return positionReciente; //La posición del último elemento de la lista de búsqueda

};