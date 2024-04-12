#include "Human.h"
#include "SwordDecorator.h"
#include "RemoveSword.h"

int main() {

    Character * human = new Human();

    human = new SwordDecorator(human);

    cout << human->getDamage() << endl;

    human = SwordDecorator::removeSword(human);



    return 0;
}
