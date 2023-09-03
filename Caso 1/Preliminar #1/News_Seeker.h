/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 25/8/23
    description:   Métodos para el Caso #1, The News Seeker
*/

#include <iostream>

using namespace std;


void top5nombres(); //Muestra las cinco nombres más relevantes
//ocupa el método:
//imprimir(Node* cabeza, int numdato)

void nombres(); //Muestra todas las nombres almacenadas
//ocupa el método:
//imprimir(Node* cabeza, int numdato)

void mostrarPatron(string listaPalabrasClave); //Mostrar nombres que contegan palabras de una lista clave
//ocupa los métodos: buscar(string palabraBusqueda), imprimir(Node* cabeza)

void eliminarPatron(string listaPalabrasClave); //Borrar nombres que contegan palabras de una lista clave
//ocupa los métodos:
//buscar(string palabraBusqueda)
//imprimir(Node* cabeza)

void reubicarnombre(string nombrenombre, int Positivo_o_Negativo); //Subir o bajar una nombre de dato
//ocupa los métodos:
//buscar(string palabraBusqueda)
//remover(string nombrenombre, int posicionAntigua)
//insertar(string nombrenombre, int posicionNueva)

