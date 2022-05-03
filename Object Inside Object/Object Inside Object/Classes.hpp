//
//  Classes.hpp
//  Object Inside Object
//
//  Created by Raphael Godoy on 03.05.22.
//

#ifndef Classes_hpp
#define Classes_hpp

#include <iostream>

using namespace std;

// CLASS ELEMENT
class Element{
    int value;
    
public:
    // Constructor
    Element(int v);
    
    //Getter and Setter
    int get(void);
    void set(int val);
};

// CLASS COLLECTION
class Collection{
    Element e1, e2;
    
public:
    // Constructor
    Collection(void);
    
    // Getter and Setter
    int get(int idx);
    void set(int idx, int val);
};

#endif /* Classes_hpp */
