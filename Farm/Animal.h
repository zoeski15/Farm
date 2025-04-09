#pragma once
#include <iostream>

using namespace std;

class Animal {
public:
	string name;
	bool hasBeenBorrowed;

	void makeSound();
	//default constructor (same name of the class, 
	//don't have params and does not return anything)
	Animal();
	//personalised constructor
	Animal(string myName);
private:

};