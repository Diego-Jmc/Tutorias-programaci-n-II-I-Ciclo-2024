
#include "coleccionPersonas.h"
#include "selectorLugar.h"

using namespace std;


int main() {

    coleccionPersonas* personas = new coleccionPersonas();
    personas->agregar(persona("Juan", 15, 70, 1.80, "Heredia"));
    personas->agregar(persona("Pedro", 18, 70, 1.73, "Heredia"));
    personas->agregar(persona("Carlos", 19, 72, 1.67, "San Jose"));
    personas->agregar(persona("Adriana", 17, 68, 1.62, "Alajuela"));
    personas->agregar(persona("Carolina", 21, 65, 1.55, "San Jose"));
    personas->agregar(persona("Marta", 23, 70, 1.60, " Alajuela"));
    personas->agregar(persona("Santiago", 20, 71, 1.65, "Cartago"));
    personas->agregar(persona("Paola", 25, 80, 1.70, "Heredia"));
    personas->agregar(persona("Jorge", 28, 85, 1.85, "San Jose"));
    personas->agregar(persona("Jenny", 30, 90, 1.90, "Alajuela"));
    personas->agregar(persona("Daniel", 35, 87, 1.83, "Cartago"));
    personas->agregar(persona("Marcela", 40, 88, 1.82, "Cartago"));

    cout <<"Utilizando selector de lugar" <<  endl;

    selectorLugar sl("Este selector selecciona personas por lugar","Heredia");

    auto listaFiltrada = personas->seleccionar(sl);


    cout << listaFiltrada->toString() << endl;


    return 0;
}
