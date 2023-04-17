cmake_minimum_required(VERSION 3.0)

project(pokemon_Battler)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(app main.cpp charmander.cpp)