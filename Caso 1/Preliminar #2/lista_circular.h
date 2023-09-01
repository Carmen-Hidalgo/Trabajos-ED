/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 1/9/23
    descripción:  Métodos TAD de la lista circular que se van a implementar
*/

#include <iostream>

using namespace std;

struct NodoNoticia {
  int relevancia;
  string noticia;
  NodoNoticia *next;

};

NodoNoticia *cabeza = nullptr;

void insertar(int numRelevancia, string nomNoticia) {
  NodoNoticia *newNodo = new NodoNoticia;
  newNodo->relevancia = numRelevancia;
  newNodo->noticia = nomNoticia;
  newNodo->next = nullptr;

  if (cabeza == nullptr) {
    cabeza = newNodo;
    newNodo->next = cabeza;
  } else {
    NodoNoticia * actual = cabeza;
    while (actual->next != cabeza) {
      actual = actual->next;
    }
    actual->next = newNodo;
    newNodo->next = cabeza;
  }
}

void imprimirLista() {
  if (cabeza == nullptr) {
    cout << "La lista está vacía" << endl <<" "<< endl;
    return;
  }

  NodoNoticia *actual = cabeza;

  cout << "-----NOTICIAS-----"<< endl<< " "<< endl; 

  do {
    cout << actual->relevancia << ", " << actual->noticia<<endl;
    actual = actual->next;
  } while (actual != cabeza);

  cout << endl;
}

  void remover(int numeroRelevancia) { //Se borra el elemento
    if (cabeza == nullptr) {
      return;
    }

    NodoNoticia* temp = cabeza;
    NodoNoticia* previo = nullptr;

    while (temp->relevancia != numeroRelevancia) {
      previo = temp;
      temp = temp->next;
      if (temp == cabeza) {
        return;
      }
    }

    if (previo == nullptr) {
      cabeza = cabeza->next;
    } else {
      previo->next = temp->next;
    }

    delete temp;
  }


//void buscar(string palabraBusqueda); //Se busca un valor en el arreglo basándose en una palabra clave

//Nodo* reordenar(Nodo* cola); //Se reordena arreglo de forma ascendiente