#pragma once
#include "../pokeball.hpp"
#include <vector>

class Trainer{
    std::string name;
    std::vector<Pokeball*> belt = {};
public:
    Trainer(std::string Name, std::vector<Pokeball> Belt);

    void setName(std::string name);
    std::string getName();

    Pokeball* getBall(int ballIndex);
};