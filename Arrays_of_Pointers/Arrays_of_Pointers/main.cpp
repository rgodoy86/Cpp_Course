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
    // *** ARRAY OF INTS ***
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
    
    delete arr1;
    cout << endl;
    
    // *** ARRAY OF ARRAYS ***
    // Variables initialization
    size = 2;
    Array *arr_arrays[2] = {new Array(size), new Array(size) };
    
    // Assigning values
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr_arrays[i] -> set(j, 100 + (i+1)*10 + (j+3));
        }
    }
        
    // Printing values
    for(int i=0; i < size ; i++){
        for(int j = 0; j < size; j++){
            cout << "Array[" << i << "] [" << j << "]: " << arr_arrays[i] -> get(j) << endl;
        }
    }
    
    delete arr_arrays[0];
    delete arr_arrays[1];
    return 0;
}
