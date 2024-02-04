#pragma once

#include "iostream"
#include "maze.h"
#include "element.h"

namespace dkeep::logic {

    class Dragon : public Element {

    public:

        explicit Dragon(Maze *maze, int x, int y);
        void MoveDragons();

        bool IsAlive();
        void SetAlive(bool alive);



    private:
        bool alive_;
        bool over_sword_;
    };


}