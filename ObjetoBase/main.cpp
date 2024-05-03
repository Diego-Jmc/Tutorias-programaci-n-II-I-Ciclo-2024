#include "Vector.h"
#include "Persona.h"
int main() {


    Vector *v = new Vector(30);


    v->agregar(new Persona("Diego",20));
    v->agregar(new Persona("Maria",66));
    v->agregar(new Persona("Rodrigo",29));
    v->agregar(new Persona("Alexander",36));


    cout << v->toString();

    return 0;
}
