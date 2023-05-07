#include "battle.hpp"

int Battle::rounds = 0;
int Battle::battles = 0;

Battle::Battle(std::array<Trainer*, 2> &trainers){
    this->trainers = trainers;
}