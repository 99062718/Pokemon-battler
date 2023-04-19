#pragma once
#include "pokemon/charmander.hpp"

class Pokeball{
    Charmander* charmander = nullptr;
public:
    Pokeball(Charmander* charmander = nullptr);

    Charmander* release();
    void returnInside(Charmander* charmander);
};