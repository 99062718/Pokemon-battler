#include <iostream>
#include "charmander.hpp"

int main(){
    std::string name;
    Charmander charmander("", "Water", "Fire", 0);

    while (true) {
        std::cout << "Enter a name: ";
        std::cin >> name;

        if (name == ""){
            std::cout << "Please enter a valid name!" << std::endl;
            continue;
        }

        charmander.setName(name);

        for (int x = 0; x < 10; x++)
            charmander.battlecry();
    }
}