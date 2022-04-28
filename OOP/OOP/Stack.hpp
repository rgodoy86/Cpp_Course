//
//  Stack.hpp
//  OOP
//
//  Created by Raphael Godoy on 28.04.22.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>

class Stack{
private:
    int _stack[100];
    int _stack_pointer;
    
public:
    Stack();
    ˜Stack();
    void push(int value);
    int pop(void);
}

#endif /* Stack_hpp */
