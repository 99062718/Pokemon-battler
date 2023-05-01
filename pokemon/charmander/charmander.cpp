#include "charmander.hpp"
#include <iostream>

Charmander::Charmander() : Pokemon("Charmander", "fire", "leaf"){}

void Charmander::battlecry(){
    std::cout << "Charmander!" << std::endl;
}