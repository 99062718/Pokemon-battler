#include <iostream>
#include "pokemon/charmander.hpp"
#include "trainer/trainer.hpp"

void nameTrainer(Trainer &trainer){
    std::string name;
    while (true) {
        std::cout << "Enter a name: ";
        std::cin >> name;

        if (name == ""){
            std::cout << "Please enter a valid name!" << std::endl;
            continue;
        }
    }
}

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

        charmander.setName(name);

        for (int x = 0; x < 10; x++)
            charmander.battlecry();
    }
}