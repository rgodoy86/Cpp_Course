//
//  Inheratence.hpp
//  Inheritance (Single)
//
//  Created by Raphael Godoy on 04.05.22.
//

#ifndef Inheratence_hpp
#define Inheratence_hpp

#include <iostream>

class Super_Class{
    
// Sub classes do not have access to private
private:
    
// Sub classes have access to protected but still private access from instance access
protected:
    int storage;
    
// Public to instance access
public:
    int get(void);
    void set(int value);
};

class Sub_Class : public Super_Class{
    
};

#endif /* Inheratence_hpp */
