#include "arena.hpp"
#include <iostream>

Arena::Arena(){
    battles.reserve(5);
}

bool Arena::addBattle(Battle* battle){
    if (battles.size() < 6) {
        battles.push_back(battle);
        return 1;
    }
    return 0;
}

void Arena::startBattles(){
    for (int x = 0; x < battles.size(); x++){
        battles[x]->startBattle();
        std::cout << "----------------------------------------" << std::endl;
    }
}