//
//  Animal.cpp
//  Inheritance (Single)
//
//  Created by Raphael Godoy on 04.05.22.
//

#include "Animal.hpp"

// *** Animal Class ***
// Constructor
Animal::Animal(string n){
    name = n;
}

// Methods
void Animal::run(void){
    cout << name << " is running." << endl;
}


// *** Dog Class ***
// Constructor
Dog::Dog(string n) : Animal(n) {
}

// Methods
void Dog::sound(void){
    cout << name << " : Woof! Woof!" << endl;
}


// *** Cat Class ***
// Constructor
Cat::Cat(string n) : Animal(n){
}

// Methods
void Cat::sound(void){
    cout << name << " : Miau! Miau!" << endl;
}
