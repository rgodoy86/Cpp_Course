//
//  main.cpp
//  Static
//
//  Created by Raphael Godoy on 02.05.22.
//

#include <iostream>

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
    function_auto();
    
    
    cout << "\nFunction Static\n" << endl;
    function_static();
    function_static();
    function_static();
    function_static();
    
    return 0;
}
