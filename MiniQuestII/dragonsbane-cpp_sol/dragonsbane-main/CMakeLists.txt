cmake_minimum_required(VERSION 3.16)
project(dragonsbane)

set(CMAKE_CXX_STANDARD 17)

add_executable(dragonsbane src/main.cpp
        src/dkeep/interaction/interaction.cpp
        include/dkeep/interaction/interaction.h
        src/dkeep/logic/game.cpp
        src/dkeep/logic/maze.cpp
        src/dkeep/logic/hero.cpp
        include/dkeep/logic/hero.h
        src/dkeep/logic/dragon.cpp
        include/dkeep/logic/dragon.h
        include/dkeep/logic/maze.h
        include/dkeep/logic/game.h
        src/dkeep/logic/element.cpp
        include/dkeep/logic/element.h
)
