#pragma once
#include "battle/battle.hpp"
#include <vector>

class Arena{
    std::vector<Battle*> battles = {};
public:
    Arena();

    bool addBattle(Battle* battle);
};