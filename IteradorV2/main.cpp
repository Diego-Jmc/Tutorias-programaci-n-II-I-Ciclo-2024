#include "Vector.cpp"

int main() {

    Vector<int> * my_vector = new Vector<int>(10);

    my_vector->insert(new int(12));
    my_vector->insert(new int(22));
    my_vector->insert(new int(134));

    Iterador<int> * iter = my_vector->getIterador();

    cout << * iter->getNext() << endl;
    cout << * iter->getNext() << endl;
    cout << * iter->getNext() << endl;

    return 0;
}
