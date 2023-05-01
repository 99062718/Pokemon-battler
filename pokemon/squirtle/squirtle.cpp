#include "squirtle.hpp"
#include <iostream>

Squirtle::Squirtle() : Pokemon("Squirtle", "water", "leaf"){}

void Squirtle::battlecry(){
    std::cout << "Squirtle!" << std::endl;
}