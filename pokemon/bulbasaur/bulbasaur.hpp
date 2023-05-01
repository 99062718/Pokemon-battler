#pragma once
#include "../pokemon.hpp"

class Bulbasaur final : public Pokemon{
public:
    Bulbasaur();

    void battlecry() override;
};