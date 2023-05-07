#include "arena.hpp"

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