#include "battle.hpp"
#include <iostream>

int Battle::rounds = 0;
int Battle::battles = 0;

Battle::Battle(std::array<Trainer*, 2> &trainers){
    this->trainers = trainers;
}

void Battle::startBattle(){
    battles++;
    std::vector<int> order1 = createOrder(trainers[0]->getBeltSize());
    std::vector<int> order2 = createOrder(trainers[1]->getBeltSize());

    for (int x = 0; x < 6; x++){ // we are assuming that every trainer here has a belt of 6. this can be problematic if one of them has a belt of 4 for example. Perhaps use max here?

    }
}

void Battle::initRound(){
    rounds++;
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

std::vector<int> Battle::createOrder(int beltSize){
    std::vector<int> order = {};
    order.reserve(beltSize);

    for (int x = 0; x < beltSize; x++){
        order.push_back(x);
    }

    shuffle(order);

    return order;
}

void Battle::shuffle(std::vector<int> &order){
    auto rng = std::default_random_engine{};
    std::shuffle(std::begin(order), std::end(order), rng);
}