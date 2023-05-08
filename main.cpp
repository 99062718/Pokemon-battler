#include <iostream>
#include "pokemon/pokemon.hpp"
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
    Trainer trainer1(nameTrainer(), {0, 1, 2, 0, 1, 2});
    Trainer trainer2(nameTrainer(), {0, 1, 2, 0, 1, 2});
}