/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 3/9/23
    descripción: Pruebas
*/

#include <iostream>
#include <sstream>
#include "News_Seeker.h"

using namespace std;


int main(int argc, char *argv[])
{

    insertar(1, "Asalto a las 10pm", "2023-02-03");
    insertar(2, "Lluvia fuerte en San José", "2020-18-12");
    insertar(3, "Luz se fue en ciertas zonas", "2021-04-10");
    insertar(4, "Concierto en Parque Viva", "2023-07-31");
    insertar(5, "Avance científico en vacunas", "2023-06-06");
    insertar(6, "Estudiantes ganan concurso en el extranjero", "2023-06-06");
    insertar(7, "Accidente en la carretera", "2023-06-06");
    insertar(8, "Nueva bacteria encontrada", "2023-06-06");
    insertar(9, "Se cancela un evento deportivo", "2023-06-06");
    insertar(10, "Falta de agua en cierta zona", "2023-06-06");

    //nombresNoticias();

    //top5Noticias();
    
    //mostrarPatron("Avance,en,cierta", "2023-06-06");

    //eliminarPatron("Luz");

    //nombresNoticias();
    
    //reubicarNombre("Luz se fue en ciertas zonas", -2);

    //nombresNoticias();

    //reubicarNombre("Accidente en la carretera", 8);

    //nombresNoticias();

    int respuesta;
    string listaPalabrasClave;
    string fechaBusqueda;
    string nombreNoticia;
    int position;
    
    do
    {
        cout << " " << endl;
        cout << "******INICIO********" << endl;
        sleep(1);
        cout << " " << endl;
        cout << "1. Ver lista de Noticias" << endl;
        cout << " " << endl;
        cout << "2. Ver las Top 5 Noticias" << endl;
        cout << " " << endl;
        cout << "3. Buscar noticias con palabra(s) clave" << endl;
        cout << " " << endl;
        cout << "4. ELiminar noticias con palabra(s) clave" << endl;
        cout << " " << endl;
        cout << "5. Reubicar lugar de Noticia" << endl;
        cout << " " << endl;
        cout << "6. Salir" << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "Digite	la opción: " << endl;
        cin >> respuesta;


        switch (respuesta){

            case 1:

                cout << " " << endl;
                cout << "1. Ver lista de Noticias" << endl;
                cout << " " << endl;
                nombresNoticias();
                
                break;

            case 2:
                cout << " " << endl;
                cout << "2. Ver las Top 5 Noticias" << endl;
                cout << " " << endl;
                top5Noticias();


                break;

            case 3:
                cout << " " << endl;
                cout << "3. Buscar noticias con palabra(s) clave" << endl;
                cout << " " << endl;
                sleep(1);
                cout << "Ingrese la(s) palabra(s) clave (Separadas por una coma): " << endl;
                cin.ignore();
                getline(cin, listaPalabrasClave);
                cout << "Ingrese fecha a partir de la cual desea realizar su búsqueda (Con este formato: AAAA-MM-DD): " << endl;
                cin.ignore();
                getline(cin, fechaBusqueda);
                mostrarPatron(listaPalabrasClave, fechaBusqueda);

                break;
            case 4:
                cout << " " << endl;
                cout << "4. ELiminar noticias con palabra(s) clave" << endl;
                sleep(1);
                cout << "Ingrese la(s) palabra(s) clave (Separadas por una coma): " << endl;
                cin.ignore();
                getline(cin, listaPalabrasClave);

                break;
            case 5:
                cout << " " << endl;
                cout << "5. Reubicar lugar de Noticia" << endl;
                sleep(1);
                cout << "Ingrese nombre completo de noticia que quiere reubicar: " << endl;
                cin.ignore();
                getline(cin, nombreNoticia);
                cout << "Ingrese número de puestos que desea mover la noticia (coloque el signo + si desea subirla y - si desea bajarla antes del número): " << endl;
                cin >> position;
                reubicarNombre(nombreNoticia, position);

                break;
                case 6:

                cout << " " << endl;
                sleep(1);
                cout << "---Gracias por usar el programa---" << endl;
                cout << " " << endl;
                sleep(1);
                break;
            default:
                cout << " " << endl;
                cout << "No ingresó una opción válida; por favor intente de nuevo" << endl;
                cout << " " << endl;
                sleep(2);
                break;

                case 7:

            break;
            case 8:

            break;
        };

    } while (respuesta != 6);
    
    return 0;

};