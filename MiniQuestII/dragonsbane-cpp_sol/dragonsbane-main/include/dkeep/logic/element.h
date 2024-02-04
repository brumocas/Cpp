#pragma once

#include "iostream"
#include "cstdint"

#include "maze.h"

namespace dkeep::logic {

    class Element {


    public:

        explicit Element(Maze *maze, int x, int y);

        Maze *maze;


        bool Move(char ch, const Direction dir);
        bool AdjacentTo(Element *other);
        bool TryOverlap(Element *other);

        int32_t GetX();
        int32_t GetY();
        void SetX(int32_t x);
        void SetY(int32_t y);


    private:

        int32_t x;
        int32_t y;


    };


}
