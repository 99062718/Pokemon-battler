#include "battle.hpp"

int Battle::rounds = 0;
int Battle::battles = 0;

Battle::Battle(std::array<Trainer*, 2> &trainers){
    this->trainers = trainers;
}

bool Battle::fight(Pokemon* pokemon1, Pokemon* pokemon2){
    if (pokemon1->getStrength() == pokemon2->getWeak()){
        return 0;
    }

    if (pokemon1->getWeak() == pokemon2->getStrength()){
        return 1;
    }

    return NULL;
}