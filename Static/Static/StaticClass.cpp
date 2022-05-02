//
//  StaticClass.cpp
//  Static
//
//  Created by Raphael Godoy on 02.05.22.
//

#include <iostream>
#include "StaticClass.hpp"

using namespace std;

// *** STATIC COMPONENT CLASS ***// Constructor
StaticComponent::StaticComponent(void){}

//Destructor
StaticComponent::~StaticComponent(void){}

//Mandatory for static components
int StaticComponent::static_component = 0;

//Methods
void StaticComponent::print(void){
    cout << "Static: " << static_component++ << " and Non Static: " << non_static_component++ << endl;
}


// *** STATIC METHOD CLASS ***
// Constructor
StaticMethods::StaticMethods(void){
    ++counter;
}

//Destructor
StaticMethods::~StaticMethods(void){
    --counter;}

//Mandatory for static components
int StaticMethods::counter = 0;

int StaticMethods::get_counter(){
    return counter;
}
//Methods
