#include "pokeball.hpp"
#include <iostream>

Pokeball::Pokeball(Charmander* Charmander):
    charmander(Charmander){}

Charmander* Pokeball::release(){
    Charmander* temp = charmander;
    charmander = nullptr;
    temp->battlecry();
    return temp;
}

void Pokeball::returnInside(Charmander* charmander){
    (*this).charmander = charmander;
}