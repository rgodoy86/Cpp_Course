//
//  Stack.cpp
//  OOP
//
//  Created by Raphael Godoy on 28.04.22.
//

#include "Stack.hpp"

void Stack::push(int value){
    _stack[_stack_pointer++] = value;
}

int Stack::pop(){
    return _stack[--_stack_pointer];
}
