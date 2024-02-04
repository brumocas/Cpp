#pragma once

#include <iostream>
#include <cstdint>
#include <vector>

#include "../../../include/dkeep/logic/dragon.h"
#include "../../../include/dkeep/logic/maze.h"
#include "../../../include/dkeep/logic/hero.h"

namespace dkeep::logic {

    class Game {
    public:
        explicit Game(int32_t ndragons);

        ~Game();

        Maze *maze_;
        Hero *hero_;
        Element *sword_;
        std::vector<Dragon*> *dragons;


        std::vector<std::vector<char>> GetMaze();

        bool UpdateGame(char &uc);


    private:
        bool UpdateTurn(Direction dir);
        bool TryExit(Direction dir);
        void TryToPickSword();
        void CreateDragons(int32_t ndragons);
        bool AreAllDragonsDead();
        bool DragonsKilledHero();
        bool DragonsMove();

    };

} // namespace dkeep::logic