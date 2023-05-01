#include <iostream>
#include "PokeConstructor.hpp"
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
    Trainer trainer1(nameTrainer(), {PokeConstructor[0]()});
    Trainer trainer2(nameTrainer(), {PokeConstructor[0]()});

    for (int x = 0; x < 6; x++) {
        std::cout << trainer1.getName() << " chooses pokemon #" << x << std::endl;
        Pokemon* pokemon1 = trainer1.getBall(x)->release();
        std::cout << trainer2.getName() << " chooses pokemon #" << x << std::endl;
        Pokemon* pokemon2 = trainer2.getBall(x)->release();

        std::cout << trainer1.getName() << " returns their pokemon" << std::endl;
        trainer1.getBall(x)->returnInside(pokemon1);
        std::cout << trainer2.getName() << " returns their pokemon" << std::endl;
        trainer2.getBall(x)->returnInside(pokemon2);
    }
}