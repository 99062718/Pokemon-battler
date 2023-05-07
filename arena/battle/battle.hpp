#pragma once
#include "../../trainer/trainer.hpp"
#include <array>
#include <random>
#include <algorithm>
#include <vector>

class Battle{
    static int rounds;
    static int battles;
    int score[2] = {0, 0};
    std::array<Trainer*, 2> trainers;
public:
    Battle(std::array<Trainer*, 2> &trainers);

    void startBattle();

    void initRound();

    void fight(Pokemon* pokemon1, Pokemon* pokemon2);

    std::vector<int> createOrder(int beltSize);

    void shuffle(std::vector<int> &order);
};