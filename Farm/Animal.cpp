#include "Animal.h"

void Animal::makeSound(){
	cout << name << " the animal makes a sound" << endl;
}

Animal::Animal() {
	name = "Unknown";
	hasBeenBorrowed = false;
}

Animal::Animal(string myName) {
	name = myName;
	hasBeenBorrowed = false;
}