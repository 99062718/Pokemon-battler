#include "trainer.hpp"
#include <iostream>

Trainer::Trainer(std::string Name, std::vector<Pokeball> Belt){
    belt.reserve(5);
    name = Name;

    for (int x = 0; x < 6; x++){
        if (x < Belt.size()){
            belt.push_back(&Belt[x]);
            continue;
        }
        belt.push_back(new Pokeball(new Charmander("Charmander", "Water", "Fire")));
    }
}

void Trainer::setName(std::string name){
    (*this).name = name;
}

std::string Trainer::getName(){
    return name;
}

Pokeball* Trainer::getBall(int ballIndex){
    return belt[ballIndex];
}