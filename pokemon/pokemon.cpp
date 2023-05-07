#include "pokemon.hpp"
#include <iostream>

Pokemon::Pokemon(std::string pokeName, std::string weak, std::string strong):
    name(pokeName), weakness(weak), strength(strong){}

// changes Pokemon name
void Pokemon::setName(std::string name){
    (*this).name = name;
}

std::string Pokemon::getStrength(){
    return strength;
}

std::string Pokemon::getWeak(){
    return weakness;
}