//
//  Classes.cpp
//  Object Inside Object
//
//  Created by Raphael Godoy on 03.05.22.
//

#include "Classes.hpp"

// Class Element
// Constructor
Element::Element(int v){
    value = v;
    cout << "Element constructed." << endl;
}

// Getter
int Element::get(void){
    return value;
}

// Setter
void Element::set(int val){
    value = val;
}

// Class Collection
// Constructor(value) : inner_constructor(value), inner_constructor(value) {...}
Collection::Collection(void) : e2(2), e1(1) {
    cout << "Collection constructed." << endl;
}

// Getter
int Collection::get(int idx){
    return idx == 1 ? e1.get() : e2.get();
}

// Setter
void Collection::set(int idx, int val){
    idx == 1 ? e1.set(val) : e2.set(val);
}
