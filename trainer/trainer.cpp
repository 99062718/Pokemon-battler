#include "trainer.hpp"

Trainer::Trainer(std::string Name, std::vector<Pokeball> Belt){
    belt.reserve(5);
    name = Name;
    belt = Belt;
}