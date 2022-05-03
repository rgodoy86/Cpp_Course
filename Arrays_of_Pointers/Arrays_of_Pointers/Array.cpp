//
//  Array.cpp
//  Arrays_of_Pointers
//
//  Created by Raphael Godoy on 03.05.22.
//

#include "Array.hpp"

// Constructor
Array::Array(int siz){
    size = siz;
    values = new int[size];
    cout << "Array of size " << size << " ints constructed" << endl;
}

// Destructor
Array::~Array(void){
    delete [] values;
    cout << "Array of size " << size << " ints destructed" << endl;
}

// Getters
int Array::get(int index){
    if (index >= 0 && index < size){
        return values[index];
    }else{
        return -1;
    }
}

// Setters
void Array::set(int index, int new_value){
    if (index >= 0 && index < size){
        values[index] = new_value;
    }
}
