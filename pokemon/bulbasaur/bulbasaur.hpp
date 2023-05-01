#pragma once
#include "../pokemon.hpp"

class Bulbasaur final : public Pokemon{
    Bulbasaur();
    
    void battlecry() override;
};