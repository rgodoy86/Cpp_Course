//
//  Stack.hpp
//  Stack
//
//  Created by Raphael Godoy on 28.04.22.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>


class Stack{
  
private:
    int _size;
    int _stack[100];
    int _pointer;
    
public:
    Stack(void);
    //˜Stack(void);
    
    void push(int value);
    int pop(void);
};







#endif /* Stack_hpp */
