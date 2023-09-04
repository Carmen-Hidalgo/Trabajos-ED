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

        cout << actual->next->dato << ", " << actual->next->nombre<<endl;
        actual = actual->next;

    };
};

void nombresNoticias(){ //Muestra todas las nombres almacenadas

    imprimirLista();
};

void mostrarPatron(string listaPalabrasClave){ //Mostrar nombres que contegan palabras de una lista clave

    string palabrasDivididas, palabra;

    palabrasDivididas = listaPalabrasClave;

    stringstream obj_ss(palabrasDivididas);

    cout <<endl <<"-----NOTICIAS ENCONTRADAS EN LA BÚSQUEDA-----"<< endl<< " "<< endl;

    while(getline(obj_ss, palabra, ',')){

        buscar(palabra);

    };

};

void eliminarPatron(string listaPalabrasClave){ //Borrar nombres que contegan palabras de una lista clave

    Nodo *tmp = cursor;
    string palabrasDivididas, palabra;
    palabrasDivididas = listaPalabrasClave;

    stringstream obj_ss(palabrasDivididas);

    int index = 0;

    cout <<endl <<"-----NOTICIAS QUE SE DESEAN BORRAR-----"<< endl<< " "<< endl;

    while(getline(obj_ss, palabra, ',')){

        buscar(palabra);
        index++;
        tmp = tmp->next;
    };

    for(int i = 0; i < index; i++){

        if(tmp->nombre.find(palabra)){
        
        remover();

        };
    };    

};

void reubicarNombre(string nombre, int Positivo_o_Negativo){ //Subir o bajar una nombre de dato

    int position = buscar(nombre)-1;
    avanzar(position);
    remover();

    if(Positivo_o_Negativo >= 0){
        
        avanzar(position + Positivo_o_Negativo);
        insertar(elementoEliminado->dato, elementoEliminado->nombre);
        
    };

    if(Positivo_o_Negativo < 0){

        avanzar(Positivo_o_Negativo *-1);
        insertar(elementoEliminado->dato, elementoEliminado->nombre);

    };

};

