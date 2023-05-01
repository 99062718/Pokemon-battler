#pragma once
#include "../pokemon.hpp"

class Squirtle final : public Pokemon{
public:
    Squirtle();

    void battlecry() override;
};