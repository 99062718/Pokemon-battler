#include <string>

class Charmander final{
    std::string name, weakness, strength;
public:
    Charmander(std::string pokeName, std::string weak, std::string strong);

    void battlecry();

    void setName(std::string name);
};