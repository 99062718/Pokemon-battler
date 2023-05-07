#pragma once
#include "../../trainer/trainer.hpp"
#include <array>

class Battle{
    static int rounds;
    static int battles;
    int score[2] = {0, 0};
    std::array<Trainer*, 2> trainers;
public:
    Battle(std::array<Trainer*, 2> &trainers);

    void fight(Pokemon* pokemon1, Pokemon* pokemon2);
};