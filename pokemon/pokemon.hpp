#pragma once
#include <string>

class Pokemon{
    std::string name, weakness, strength;
public:
    Pokemon(std::string pokeName, std::string weak, std::string strong);

    void battlecry();

    void setName(std::string name);
};