
#include <iostream>
#include "Animal.h"
#include "Pig.h"
#include "Dog.h"

int main()
{
    cout << "================================" << endl;
    cout << " Inheritance " << endl;
    // Declares an object and calls the default constructor
    Animal animal1;
    animal1.name = "Poly"; //set a name for the animal
    animal1.makeSound();
    //Declares an object and calls the constructor with param
    Animal animal2("Rocky");
    animal2.makeSound();
    // Declares an object and call the default constructor
    Animal animal3;
    animal3.makeSound();

    // inheritance 
    Pig myPig;
    myPig.name = "Babe";
    myPig.barnNumber = 32;
    myPig.makeSound();

    Dog myDog;
    myDog.name = "Scooby";
    myDog.isTrained = false;
    myDog.chaseTail();
    myDog.makeSound();

    Dog anotherDog;
    anotherDog.name = "Ruffus";

    // polimorphism

    //An array of pigs, it will only accepts pigs as elements
    Pig pigsArray[3];
    pigsArray[0] = myPig;
    //the next line produces a compilation error
    //pigsArray[1] = animal1;

    //To manage Pigs & Dogs in the same array
    //Define an Array of Animals, as Pigs & Dogs inherit from Animal

    Animal animalsArray[3];
    animalsArray[0] = myPig;
    animalsArray[1] = myDog;
    animalsArray[2] = anotherDog;

    //displaying the data in the array
    cout << boolalpha;
    cout << endl;
    cout << "================================" << endl;
    cout << "Display Animal Array names" << endl;
    for (int i = 0; i < 3; i++) {
        cout << animalsArray[i].name << " has been borrowed: "
            << animalsArray[i].hasBeenBorrowed << endl;
    }

    //To indicate that either a Dog or a Pig has been borrowed
    //they have to tell you which is the Dog's or Pig's name you
    //want to borrow

    //let's borrow Ruffus
    cout << "================================" << endl;
    cout << "Borrowing Ruffus" << endl;
    for (int i = 0; i < 3; i++) {
        if (animalsArray[i].name == "Ruffus") {
            animalsArray[i].hasBeenBorrowed = true;
        }   
    }
    cout << "================================" << endl;
    cout << "Displaying all Animals" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << animalsArray[i].name << " has been borrowed: "
            << animalsArray[i].hasBeenBorrowed << endl;

    }

}

