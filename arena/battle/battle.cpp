#include "battle.hpp"
#include <iostream>
#include <chrono>

int Battle::rounds = 0;
int Battle::battles = 0;

Battle::Battle(std::array<Trainer*, 2> &trainers){
    this->trainers = trainers;
}

void Battle::startBattle(){
    battles++;
    std::vector<int> order1 = createOrder(trainers[0]->getBeltSize());
    std::vector<int> order2 = createOrder(trainers[1]->getBeltSize());

    for (int x = 0; x < std::min(trainers[0]->getBeltSize(), trainers[1]->getBeltSize()); x++){
        initRound(order1[x], order2[x]);
    }
}

void Battle::initRound(int first, int second){
    rounds++;
    std::cout << trainers[0]->getName() << " chooses pokemon #" << first << std::endl;
    Pokemon* poke1 = trainers[0]->getBall(first)->release();
    std::cout << trainers[1]->getName() << " chooses pokemon #" << second << std::endl;
    Pokemon* poke2 = trainers[1]->getBall(second)->release();

    fight(poke1, poke2);

    std::cout << trainers[0]->getName() << " returns their pokemon" << std::endl;
    trainers[0]->getBall(first)->returnInside(poke1);
    std::cout << trainers[1]->getName() << " returns their pokemon" << std::endl;
    trainers[0]->getBall(first)->returnInside(poke2);
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
    rng.seed(std::chrono::system_clock::now().time_since_epoch().count());
    std::shuffle(std::begin(order), std::end(order), rng);
}