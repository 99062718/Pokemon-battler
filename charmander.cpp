#include "charmander.hpp"
#include <iostream>

Charmander::Charmander(std::string pokeName, std::string weak, std::string strong):
    name(pokeName), weakness(weak), strength(strong){}

void Charmander::battlecry(){
    std::cout << name;
}