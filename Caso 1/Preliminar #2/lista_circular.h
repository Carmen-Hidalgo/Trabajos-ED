/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 1/9/23
    descripción:  Métodos TAD de la lista circular que se van a implementar
*/

#include <iostream>

using namespace std;

struct NodoNoticia { //La estructura para los nodos. Se tiene dos atributos
  int relevancia; //Número de relevancia
  string noticia; //Nombre de la noticia
  NodoNoticia *next;//Se crea un nodo para apuntar al siguiente elemento

};

NodoNoticia *cursor = NULL; //Se crea el cursor

bool vacia(){ //Muestra si la lista está vacía
  return cursor == NULL;
};

int cabeza(){ //El elemento señalado es el que está después

  return cursor->next->relevancia;

};

int cola (){ //El elemento señalado es el actual

  return cursor->relevancia;

};

void avanzar(){ //Avanza el cursor al siguiente elemento

  cursor = cursor->next;

};

void insertar(int numRelevancia, string nomNoticia) { //Se inserta un elemento después del cursor
  
  NodoNoticia *newNodo = new NodoNoticia; //Se crea un nuevo nodo
  newNodo->relevancia = numRelevancia;
  newNodo->noticia = nomNoticia;

  if (cursor == NULL) {
    newNodo->next = newNodo;
    cursor = newNodo;
  } else {

    newNodo->next = cursor->next;
    cursor->next = newNodo;   
  }
}

void remover() { //Se borra el elemento que se encuentra después del cursor
    
    NodoNoticia *antiguo = cursor->next;
    
    if (cursor == NULL) {
      return;
    };

    if(antiguo == cursor)
      cursor =NULL;
    else
      cursor->next = antiguo->next;
    
    delete antiguo;
}

void imprimirLista() { //Se imprime toda la lista
  if ( cursor == NULL) {
   cout << "La lista está vacía" << endl <<" "<< endl;
   return;
  }

  NodoNoticia *actual = cursor;

  cout << "-----NOTICIAS-----"<< endl<< " "<< endl; 

  do {
    cout << actual->next->relevancia << ", " << actual->next->noticia<<endl;
    actual = actual->next;
  } while (actual != cursor);

  cout << endl;
};

/*void buscar(string palabraBusqueda){ //Se busca un valor en la lista basándose en una palabra clave

  NodoNoticia *temp = cursor;
  do {
    cout << temp->next->relevancia << ", " << temp->next->noticia<<endl;
    temp = temp->next;
  } while (temp->noticia == palabraBusqueda);

  cout<<endl;

};*/