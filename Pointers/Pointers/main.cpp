//
//  main.cpp
//  Pointers
//
//  Created by Raphael Godoy on 02.05.22.
//

#include <iostream>
#include "Pointers.hpp"

int main(void) {
    Pointer *ptr1, *ptr2;
    
    ptr1 = new Pointer();
    ptr2 = new Pointer();
    
    std::cout << "\nAssigning values to the atribute:\n" << std::endl;
    ptr1 -> value = 0;
    ptr2 -> value = 2;
    
    //Accessing attributes
    std::cout << "ptr1: " << (ptr1 -> value) << std::endl;
    std::cout << "ptr2: " << (ptr2 -> value) << std::endl;
    std::cout << std::endl;
    
    //Accessing methods
    ptr1 -> show();
    ptr2 -> show();
    std::cout << std::endl;
    
    delete ptr1;
    delete ptr2;
    return 0;
}
