#include <iostream>
#include "trainer/trainer.hpp"
#include "arena/arena.hpp"
#include "arena/battle/battle.hpp"

std::string nameTrainer(){
    std::string name;
    retry:
    std::cout << "Enter a name: ";
    std::cin >> name;

    if (name == ""){
        std::cout << "Please enter a valid name!" << std::endl;
        goto retry;
    }

    return name;
}

int main(){
    Trainer trainer1(nameTrainer(), {0, 1, 2, 0, 1, 2});
    Trainer trainer2(nameTrainer(), {0, 1, 2, 0, 1, 2});
    std::array<Trainer*, 2> trainers{&trainer1, &trainer2};

    Arena arena{};
    arena.addBattle(new Battle(trainers));
    arena.startBattles();
}