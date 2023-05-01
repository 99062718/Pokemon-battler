#pragma once
#include "../pokemon.hpp"

class Charmander final : public Pokemon{
public:
    Charmander();

    void battlecry() override;
};