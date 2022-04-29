//
//  main.cpp
//  Stack
//
//  Created by Raphael Godoy on 28.04.22.
//

#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {
    // Testing the Superclass "Stack"
    std::cout << "Superclass \"Stack\"\n" << std::endl;
    Stack s1;
    
    // Adding some values into it
    s1.push(5);
    std::cout << "Adding 5" << std::endl;
    s1.push(7);
    std::cout << "Adding 7" << std::endl;
    s1.push(9);
    std::cout << "Adding 9" << std::endl;
    
    // Removing some values and printing them
    std::cout << std::endl;
    std::cout << "Removing: " << s1.pop() << std::endl;
    std::cout << "Removing: " << s1.pop() << std::endl;
    std::cout << "Removing: " << s1.pop() << std::endl;
    
    // Testing the subclass "SubStack"
    std::cout << "\nSuperclass \"Stack\"\n" << std::endl;
    SubStack s2;
    
    // Adding some values into it
    s2.push(15);
    std::cout << "Adding 15, sum: " << s2.getSum() << std::endl;
    s2.push(73);
    std::cout << "Adding 73, sum: " << s2.getSum() << std::endl;
    s2.push(91);
    std::cout << "Adding 91, sum: " << s2.getSum() << std::endl;
    
    // Removing some values and printing them
    std::cout << std::endl;
    std::cout << "Removing: " << s2.pop() << ", sum: " << s2.getSum() << std::endl;
    std::cout << "Removing: " << s2.pop() << ", sum: " << s2.getSum() << std::endl;
    std::cout << "Removing: " << s1.pop() << ", sum: " << s2.getSum() << std::endl;
}
