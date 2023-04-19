#include "pokeball.hpp"

Pokeball::Pokeball(Charmander* charmander):
    charmander(charmander){}

Charmander* Pokeball::release(){
    Charmander* temp = charmander;
    charmander = nullptr;
    temp->battlecry();
    return temp;
}

void Pokeball::returnInside(Charmander* charmander){
    (*this).charmander = charmander;
}