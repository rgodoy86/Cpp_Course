//
//  main.cpp
//  Static
//
//  Created by Raphael Godoy on 02.05.22.
//

#include <iostream>
#include "StaticClass.hpp"

using namespace std;

void function_static(void){
    static int var_static = 99;
    cout << "Variable Static: " << var_static++  << endl;
}

void function_auto(void){
    int var_auto = 99;
    cout << "Variable Auto: " << var_auto++  << endl;
}

int main(void) {
    // Function Auto Test
    cout << "\nFunction Auto\n" << endl;
    function_auto();
    function_auto();
    function_auto();
    
    // Function Static Test
    cout << "\nFunction Static\n" << endl;
    function_static();
    function_static();
    function_static();
    
    // Class Static Test
    StaticClass sc1, sc2;
    
    sc1.non_static_component = 10;
    sc2.non_static_component = 10;
    
    cout << "\nClass Static Component vs Non Static Component" << endl;
    sc1.print();
    sc1.print();
    sc1.print();
    
    sc2.print();
    sc2.print();
    sc2.print();
    
    return 0;
}
