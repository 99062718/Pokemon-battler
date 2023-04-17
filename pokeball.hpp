#include "charmander.hpp"

class Pokeball{
    Charmander* charmander = nullptr;
public:
    Pokeball(Charmander* charmander);

    Charmander* release();
    void returnInside(Charmander* charmander);
};