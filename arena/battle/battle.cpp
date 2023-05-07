#include "battle.hpp"
#include <iostream>

int Battle::rounds = 0;
int Battle::battles = 0;

Battle::Battle(std::array<Trainer*, 2> &trainers){
    this->trainers = trainers;
}

void Battle::fight(Pokemon* pokemon1, Pokemon* pokemon2){
    if (pokemon1->getStrength() == pokemon2->getWeak()){
        std::cout << pokemon1->getName() << " has won!" << std::endl;
        score[0];
    }

    if (pokemon1->getWeak() == pokemon2->getStrength()){
        std::cout << pokemon2->getName() << " has won!" << std::endl;
        score[1]++;
    }

    std::cout << "A draw has been reached!" << std::endl;
    score[0]++;
    score[1]++;
}