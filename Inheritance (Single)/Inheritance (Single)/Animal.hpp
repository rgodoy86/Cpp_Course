//
//  Animal.hpp
//  Inheritance (Single)
//
//  Created by Raphael Godoy on 04.05.22.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>
#include <string>

using namespace std;

// *** Animal Class  ***
class Animal{
private:
    
protected:
    string name;

public:
    // Constructor
    Animal(string n);
    // Methods
    void run(void);
    
};

// *** Dog Class (Sub Class from Animal) ***
class Dog : public Animal{
private:
    
protected:
    
public:
    Dog(string n);
    void sound(void);
};


// *** Cat Class (Sub Class from Animal) ***
class Cat : public Animal{
private:
    
protected:
    
public:
    Cat(string n);
    void sound(void);
    
};




#endif /* Animal_hpp */
