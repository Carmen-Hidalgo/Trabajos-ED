/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 3/9/23
    description: Métodos para el Caso #1, The News Seeker
*/

#include <iostream>
#include <sstream>
#include "lista_circular.h"

using namespace std;


void top5Noticias(){ //Muestra las cinco nombres más relevantes

    Nodo *actual = cursor;

    cout << "-----TOP 5 NOTICIAS-----"<< endl<< " "<< endl;
    
    for(int i = 0; i < 5; i++){

        cout << actual->dato << ", " << actual->nombre << actual->fecha <<endl;
        actual = actual->next;

    };
};

void nombresNoticias(){ //Muestra todas las nombres almacenadas

    imprimirLista();
};

void mostrarPatron(string listaPalabrasClave, string date){ //Mostrar nombres que contegan palabras de una lista clave

    string palabrasDivididas, palabra;

    palabrasDivididas = listaPalabrasClave;

    stringstream obj_ss(palabrasDivididas);

    cout <<endl <<"-----NOTICIAS ENCONTRADAS EN LA BÚSQUEDA-----"<< endl<< " "<< endl;

    while(getline(obj_ss, palabra, ',')){

        buscar(palabra, date);

    };

};

//ARREGLAR
void eliminarPatron(string listaPalabrasClave){ //Borrar nombres que contegan palabras de una lista clave

    Nodo *tmp = cursor;
    string palabrasDivididas, palabra;

    palabrasDivididas = listaPalabrasClave;

    stringstream obj_ss(palabrasDivididas);

    cout <<endl <<"-----NOTICIAS QUE SE DESEAN BORRAR-----"<< endl<< " "<< endl;

    while(getline(obj_ss, palabra, ',')){

        buscar(palabra, tmp->fecha);
        tmp = tmp->next;
    };   

};

//ARREGLAR
void reubicarNombre(string nombre, string date, int Positivo_o_Negativo){ //Subir o bajar una nombre de dato

    Nodo *temp = cursor;
    int position;

    if(Positivo_o_Negativo > 0){

        revLista();
        nombresNoticias();
        position = buscar(nombre, date);
        avanzar(position);
        nombresNoticias();
        remover();
        nombresNoticias();        
        avanzar(Positivo_o_Negativo +1);
        insertar(elementoEliminado->dato, elementoEliminado->nombre, elementoEliminado->fecha);
        nombresNoticias();
        revLista();
        nombresNoticias();
        avanzar(1);
        nombresNoticias();
        
    };

    if(Positivo_o_Negativo < 0){

        position = buscar(nombre, date);
        avanzar(position); //avanzar(position - 2)
        nombresNoticias();
        remover();
        nombresNoticias();        
        avanzar(1 + Positivo_o_Negativo*-1); //avanzar(position + Positivo_o_Negativo*-1)
        nombresNoticias();
        insertar(elementoEliminado->dato, elementoEliminado->nombre, elementoEliminado->fecha);
        nombresNoticias();
        avanzar(1);
        nombresNoticias();
        

    };

};

