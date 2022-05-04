//
//  main.cpp
//  Inheritance (Single)
//
//  Created by Raphael Godoy on 04.05.22.
//

#include <iostream>
#include "Inheratence.hpp"
#include "Animal.hpp"

using namespace std;


// Component        Inherited Class     Access
//
// public                               public
// protected        public              protected
// private                              -
//
// public                               protected
// protected        protected           protected
// private                              -
//
// public                               private
// protected        private             private
// private                              -


int main(int argc, const char * argv[]) {
    // Super Class
    Super_Class super;
    super.set(10);
    
    cout << "Value of Super Class: " << super.get() << endl;
    
    // Sub Class
    Sub_Class sub;
    sub.set(20);
    
    cout << "Value of Super Class: " << sub.get() << endl;
    
    // Animal Class
    Animal super_dog("Tuby");
    Animal super_cat("Garfield");
    
    super_dog.run();
    super_cat.run();
    
    // Dog and Cat Classes
    Dog sub_dog("Rex");
    Cat sub_cat("Felino");
    
    sub_dog.sound();
    sub_cat.sound();
    
    sub_dog.run();
    sub_cat.run();
    
    // Pointers
    Animal * dog_ptr = new Dog("Pointy");
    Animal * cat_ptr = new Cat("Pontiara");
    
    // we cannot use "sound() method since both are class Animal"
    dog_ptr -> run();
    // dog_ptr -> sound(); will lead to error
    cat_ptr -> run();
    // cat_ptr -> sound(); will lead to error
    
    // Static Cast
    // Prone to error (assign cat to a dog an dvice-versa).
    // Full pointer validity verification is possible
    // when and only when the program is being executed (Runtime)
    static_cast<Dog *>(dog_ptr) -> sound();
    static_cast<Cat *>(cat_ptr) -> sound();
    
    // Dynamic Cast
    // Convertion is carried out dynamically regarding the current state of all created objects.
    // Conversion may or not be sucessful causing the program to stop
    // if it wants any "dog to meow"
    
    
    // Casting (take away):
    // Objects lying at higher levels are compatible with lower levels
    // even when the inheritance chain in arbitrary long.
    
    return 0;
}
