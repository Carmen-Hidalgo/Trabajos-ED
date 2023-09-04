/*
    Nombre: Carmen Hidalgo Paz
    Fecha: 3/9/23
    descripción: Pruebas
*/

#include "News_Seeker.h"

using namespace std;


int main(int argc, char *argv[])
{

    nombresNoticias();

    insertar(10, "Asalto a las 10pm");
    insertar(9, "Lluvia fuerte en San José");
    insertar(8, "Luz se fue en ciertas zonas");
    insertar(7, "Concierto en Parque Viva");
    insertar(6, "Avance científico en vacunas");
    insertar(5, "Estudiantes ganan concurso en el extranjero");
    insertar(4, "Accidente en la carretera");
    insertar(3, "Nueva bacteria encontrada");
    insertar(2, "Se cancela un evento deportivo");
    insertar(1, "Falta de agua en cierta zona");

    nombresNoticias();

    top5Noticias();
    
    mostrarPatron("Avance,en,cierta");

    eliminarPatron("Luz");

    nombresNoticias();
    
    reubicarNombre("Luz se fue en ciertas zonas", -2);

    nombresNoticias();

    reubicarNombre("Accidente en la carretera", 8);

    nombresNoticias();

};