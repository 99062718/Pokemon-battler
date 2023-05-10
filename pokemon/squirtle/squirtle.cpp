#include "squirtle.hpp"
#include <iostream>

Squirtle::Squirtle() : Pokemon("Squirtle", "leaf", "water"){}

void Squirtle::battlecry(){
    std::cout << "Squirtle!" << std::endl;
}