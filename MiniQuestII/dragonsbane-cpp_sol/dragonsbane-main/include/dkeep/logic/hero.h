#pragma once

#include "iostream"
#include "cstdint"

#include "element.h"
#include "maze.h"

namespace dkeep::logic {

    class Hero : public Element {

    public:
        explicit Hero(Maze *maze, int x0, int y0);

        bool IsArmed();
        bool HasKey();
        char GetCH();
        void SetArmed(bool is_armed);
        void SetHasKey(bool has_key);

    private:
        bool is_armed_;
        bool has_key_;
        char ch;
        Maze *maze_;

    };


}