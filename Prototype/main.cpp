#include <iostream>
using namespace std;


// la clase prototype
class Persona{
protected:
    string nombre;
public:
    explicit Persona(const string &nombre) : nombre(nombre) {}
    virtual string getNombre()=0;
    virtual Persona * clonar() = 0;
    };

class Profesor : public Persona  {
private:
    string materia;
public:
    Profesor(const string &nombre, const string &materia) : Persona(nombre), materia(materia) {}

    string getNombre()override{
        return nombre;
    }

    string getMateria(){
        return materia;
    }

    virtual Persona * clonar() override{
        return new Profesor(*this);
    }

};

int main() {


    Persona *p1 = new Profesor("Diego","progra");

    auto p2 = p1->clonar();

    cout << p1->getNombre() << endl;
    cout << p2->getNombre() << endl;

    return 0;
}
