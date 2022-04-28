//
//  Stack.cpp
//  Stack
//
//  Created by Raphael Godoy on 28.04.22.
//

#include "Stack.hpp"

// Constructor & Destructor
Stack::Stack(void){
    _pointer = 0;
};
//Stack::˜Stack(void){};


// Methods
void Stack::push(int value){
    if (_pointer < _size){
    _stack[_pointer++] = value;
    }
};

int Stack::pop(void){
    if (_pointer > 0){
        return _stack[--_pointer];
    }else{
        return 0;
    }
};
