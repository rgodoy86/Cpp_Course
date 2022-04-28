//
//  main.cpp
//  Stack
//
//  Created by Raphael Godoy on 28.04.22.
//

#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {
    Stack s1;
    s1.push(5);
    s1.push(7);
    s1.push(9);
    
    std::cout << "Pop: " << s1.pop() << std::endl;
    std::cout << "Pop: " << s1.pop() << std::endl;
    std::cout << "Pop: " << s1.pop() << std::endl;
}
