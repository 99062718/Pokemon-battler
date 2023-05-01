#pragma once
#include "../pokemon.hpp"

class Charmander final : public Pokemon{
    Charmander();
    
    void battlecry() override;
};