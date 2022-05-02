//
//  Pointers.cpp
//  Pointers
//
//  Created by Raphael Godoy on 02.05.22.
//

#include "Pointers.hpp"
#include <iostream>

// Constructor
Pointer::Pointer(void){
    std::cout << "Instance created." << std::endl;
}

// Destructor
Pointer::~Pointer(void){
    std::cout << "Instance destroyed." << std::endl;
}

// Methods
void Pointer::show(void){
    std::cout << "Value currently is: " << value << std::endl;
}
