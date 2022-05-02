//
//  Stack.cpp
//  Stack
//
//  Created by Raphael Godoy on 28.04.22.
//

#include "Stack.hpp"

// ***** CLASS STACK *****
// Constructor
Stack::Stack(void){
    _pointer = 0;
    _size = 100;
    
    for(int i = 0; i < _size; i++){
        _stack[i] = 0;
    }
};

// Destructor
Stack::~Stack(void){}

// Methods

// Push
void Stack::push(int value){
    if (_pointer < _size){
        _stack[_pointer++] = value;
    }
};

// Pop
int Stack::pop(void){
    if (_pointer > 0){
        _stack[_pointer] = 0;
        return _stack[--_pointer];
    }else{
        return 0;
    }
};

// ***** CLASS SUBSTACK *****
//Constructor
SubStack::SubStack(void){
    _sum = 0;
}

// Destructor
SubStack::~SubStack(void){}

//Methods

// Push
void SubStack::push(int value){
    //if(Stack::_pointer < Stack::_size){
        _sum += value;
        Stack::push(value);
    //}
}

//Pop
int SubStack::pop(void){
    //if(Stack::_pointer > 0){
        int val = Stack::pop();
        _sum -= val;
        return val;
    //}
}
 
//Getters
int SubStack::getSum(void){
    return _sum;
}
