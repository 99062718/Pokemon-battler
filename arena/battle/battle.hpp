#pragma once
#include "../../trainer/trainer.hpp"
#include <array>

class Battle{
    static int rounds;
    static int battles;
    std::array<Trainer*, 2> trainers;
public:
    Battle(std::array<Trainer*, 2> trainers);
};