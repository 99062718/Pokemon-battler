#pragma once
#include "pokemon/pokemon.hpp"
#include "pokemon/bulbasaur/bulbasaur.hpp"
#include "pokemon/charmander/charmander.hpp"
#include "pokemon/squirtle/squirtle.hpp"
typedef Pokemon* (*functionPtr)();

functionPtr PokeConstructor[3] = {
    []() -> Pokemon* {return new Bulbasaur();},
    []() -> Pokemon* {return new Charmander();},
    []() -> Pokemon* {return new Squirtle();}
};