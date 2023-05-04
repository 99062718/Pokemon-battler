#pragma once
#include "battle/battle.hpp"

class Arena{
    Battle* battles[5];
public:
    Arena();

    void addBattle(Battle* battle);
};