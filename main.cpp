#include <iostream>
#include "pokemon/charmander.hpp"
#include "trainer/trainer.hpp"

std::string nameTrainer(){
    std::string name;
    while (true) {
        std::cout << "Enter a name: ";
        std::cin >> name;

        if (name == ""){
            std::cout << "Please enter a valid name!" << std::endl;
            continue;
        }

        return name;
    }
}

int main(){
    Trainer trainer1(nameTrainer(), {});
    Trainer trainer2(nameTrainer(), {});

    for (int x = 0; x < 6; x++) {
        
    }
}