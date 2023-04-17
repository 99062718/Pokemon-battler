#include "pokeball.hpp"

Pokeball::Pokeball(Charmander* charmander):
    charmander(charmander){}

Charmander* Pokeball::release(){
    Charmander* temp = charmander;
    charmander = nullptr;
    return temp;
}

void Pokeball::returnInside(Charmander* charmander){
    (*this).charmander = charmander;
}