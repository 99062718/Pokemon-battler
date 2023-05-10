#include "charmander.hpp"
#include <iostream>

Charmander::Charmander() : Pokemon("Charmander", "water", "fire"){}

void Charmander::battlecry(){
    std::cout << "Charmander!" << std::endl;
}