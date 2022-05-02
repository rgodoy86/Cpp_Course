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
    
    std::cout << "\n...Some code...\n" << std::endl;
    
    delete ptr1;
    delete ptr2;
    return 0;
}
