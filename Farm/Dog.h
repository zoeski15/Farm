#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
	bool isTrained;
	void chaseTail();
	//polymorphism
	void makeSound();
private:

};