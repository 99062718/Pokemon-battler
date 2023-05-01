#include "bulbasaur.hpp"
#include <iostream>

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", "fire", "leaf"){}

void Bulbasaur::battlecry(){
    std::cout << "Bulbasaur!" << std::endl;
}