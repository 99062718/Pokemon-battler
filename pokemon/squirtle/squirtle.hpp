#pragma once
#include "../pokemon.hpp"

class Squirtle final : public Pokemon{
    Squirtle();

    void battlecry() override;
};