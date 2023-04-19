#include "charmander.hpp"
#include <iostream>

Charmander::Charmander(std::string pokeName, std::string weak, std::string strong, int id):
    name(pokeName), weakness(weak), strength(strong), id(id){}


// prints Charmanders name
void Charmander::battlecry(){
    std::cout << name << std::endl;
}

// changes Charmanders name
void Charmander::setName(std::string name){
    (*this).name = name;
}

// returns Charmanders id
int Charmander::getID(){
    return id;
}