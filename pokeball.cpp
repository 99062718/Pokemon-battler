#include "pokeball.hpp"
#include <iostream>

Pokeball::Pokeball(Pokemon* Pokemon):
    pokemon(Pokemon){}

Pokemon* Pokeball::release(){
    Pokemon* temp = pokemon;
    pokemon = nullptr;
    temp->battlecry();
    return temp;
}

void Pokeball::returnInside(Pokemon* pokemon){
    (*this).pokemon = pokemon;
}