#pragma once
#include "pokemon/pokemon.hpp"

class Pokeball{
    Pokemon* pokemon = nullptr;
public:
    Pokeball(Pokemon* pokemon = nullptr);

    Pokemon* release();
    void returnInside(Pokemon* pokemon);
};