#pragma once
#include <string>

class Charmander final{
    std::string name, weakness, strength;
    int id;
public:
    Charmander(std::string pokeName, std::string weak, std::string strong, int id);

    void battlecry();

    void setName(std::string name);
    int getID();
};