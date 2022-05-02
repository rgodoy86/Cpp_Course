//
//  StaticClass.hpp
//  Static
//
//  Created by Raphael Godoy on 02.05.22.
//

#ifndef StaticClass_hpp
#define StaticClass_hpp

class StaticComponent{
public:
    StaticComponent(void);
    ~StaticComponent(void);
    static int static_component;
    int non_static_component;
    
    void print(void);
};


class StaticMethods{
private:
    static int counter;
public:
    StaticMethods(void);
    ~StaticMethods(void);
    static int get_counter(void);
};
#endif /* StaticClass_hpp */
