#include "Vector.cpp"
using namespace std;

class Persona{
    private:
        string nombre;
    public:
     Persona(const string &nombre) : nombre(nombre) {}

     std::ostream & imprimir(std::ostream &os)const{
         os << "Nombre: " << nombre << endl;
     }

     // sobrecargar del operador <<
     friend std::ostream & operator<<(std::ostream& os, const Persona & p){
       return p.imprimir(os);
     }


};

int main() {

    auto vector = new Vector<Persona>(10);
    vector->insertar(new Persona("Diego"));
    vector->insertar(new Persona("Arturo"));
    vector->insertar(new Persona("Joe"));
    vector->insertar(new Persona("Mario"));

    vector->mostrar();


    return 0;
}
