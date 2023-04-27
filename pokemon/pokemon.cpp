#include "charmander.hpp"
#include <iostream>

Pokemon::Pokemon(std::string pokeName, std::string weak, std::string strong):
    name(pokeName), weakness(weak), strength(strong){}


// prints Pokemon name
void Pokemon::battlecry(){
    std::cout << name << std::endl;
}

// changes Pokemon name
void Pokemon::setName(std::string name){
    (*this).name = name;
}