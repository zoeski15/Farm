#include "Dog.h"

void Dog::chaseTail() {
	cout << name << " Go around in circles" << endl;
}

//re implemented the code for the method defined in the parent
//class Animal, so Dog implements its own behaviour
void Dog::makeSound() {
	cout << name << " barks" << endl;
}