//
//  main.cpp
//  Inheritance (Single)
//
//  Created by Raphael Godoy on 04.05.22.
//

#include <iostream>
#include "Inheratence.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // Super Class
    Super_Class sc1;
    
    sc1.set(10);
    
    cout << "Value of Super Class: " << sc1.get() << endl;
    
}
