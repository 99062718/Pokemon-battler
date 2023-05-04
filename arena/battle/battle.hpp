#pragma once
#include "../../trainer/trainer.hpp"

class Battle{
    static int rounds;
    static int battles;
    Trainer* trainer[2];
public:
    Battle(Trainer* trainers[2]);
};