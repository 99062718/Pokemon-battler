#include <iostream>
#include "charmander.hpp"

int main(){
    std::string name;
    Charmander charmander("", "Water", "Fire");

    while (true) {
        std::cout << "Enter a name: ";
        std::cin >> name;

        if (name == ""){
            std::cout << "Please enter a valid name!" << std::endl;
            continue;
        }

        for (int x = 0; x < 10; x++)
            charmander.battlecry();
    }
}