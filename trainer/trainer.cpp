#include "trainer.hpp"

Trainer::Trainer(std::string Name, std::vector<Pokeball> Belt){
    belt.reserve(5);
    name = Name;

    for (int x = 0; x < belt.size(); x++){
        if (x < Belt.size()){
            belt[x] = Belt[x];
            continue;
        }
        belt[x] = new Charmander("Charmander", "Water", "Fire");
    }
}