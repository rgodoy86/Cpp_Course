//
//  StaticClass.cpp
//  Static
//
//  Created by Raphael Godoy on 02.05.22.
//

#include <iostream>
#include "StaticClass.hpp"

using namespace std;

//Mandatory for static components
int StaticClass::static_component = 0;

//Methods
void StaticClass::print(void){
    cout << "Static: " << static_component++ << " and Non Static: " << non_static_component++ << endl;
}
