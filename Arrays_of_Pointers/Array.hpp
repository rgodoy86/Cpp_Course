//
//  Array.hpp
//  Arrays_of_Pointers
//
//  Created by Raphael Godoy on 03.05.22.
//

#ifndef Array_hpp
#define Array_hpp

#include <iostream>

using namespace std;

class Array{
    int *values;
    int size;
    
public:
    // Constructor and Destructor
    Array(int siz);
    ~Array(void);
    
    // Getters and Setters
    int get(int index);
    void set(int index, int new_value);
    
};

#endif /* Array_hpp */
