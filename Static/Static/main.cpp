//
//  main.cpp
//  Static
//
//  Created by Raphael Godoy on 02.05.22.
//

#include <iostream>
#include "StaticClass.hpp"

using namespace std;

/*
 * STATIC     function call STATIC     function - OK
 * STATIC     function call NON-STATIC function - FAIL
 * NON-STATIC function call STATIC     function - OK
 * NON-STATIC function call NON-STATIC function - OK
 */

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
    
    // Class - Static Component
    cout << "\nClass - Static Component vs Non Static Component" << endl;
    
    StaticComponent sc1, sc2;
    
    sc1.non_static_component = 10;
    sc2.non_static_component = 10;
    
    
    sc1.print();
    sc1.print();
    sc1.print();
    
    sc2.print();
    sc2.print();
    sc2.print();
    
    // Class - Static Methods
    cout << "\nClass Static Methods vs Non Static Methods" << endl;
    
    //Class::get_counter()
    cout << "Class::get_counter: " << StaticMethods::get_counter() << endl;
    StaticMethods sm1;
    //Class::get_counter()
    cout << "Class::get_counter: " <<  StaticMethods::get_counter() << endl;
    StaticMethods sm2;
    // Instance.get_counter
    cout << "sm2::get_counter: " <<  sm2.get_counter() << endl;
    
    return 0;
}
