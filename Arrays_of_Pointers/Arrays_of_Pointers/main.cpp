//
//  main.cpp
//  Arrays_of_Pointers
//
//  Created by Raphael Godoy on 03.05.22.
//

#include <iostream>
#include "Array.hpp"

using namespace std;

int main(void) {
    // Variables initialization
    int size = 10;
    Array *arr1 = new Array(size);
    
    // Assigning values
    for(int i = 0; i < size; i++){
        arr1 -> set(i, i*100+i);
    }
    
    // Printing values
    for(int i=0; i < size ; i++){
        cout << "Array[" << i << "]: " << arr1 -> get(i) << endl;
    }
    
    return 0;
}
