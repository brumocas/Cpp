#pragma once

#include <iostream>
#include <vector>
#include <cstdint>

namespace dkeep::logic {

    enum class Direction {
        kNorth, kSouth, kEast, kWest
    };

    class Maze {
    public:

        explicit Maze();

        std::vector<std::vector<char>> &GetMaze();

        void ClearCell(int32_t x, int32_t y);

        bool CanMoveInto(int32_t x, int32_t y);

        bool IsThere(char ch, int32_t here_x, int32_t here_y, Direction dir);

        void MoveElement(char ch, int32_t sx, int32_t sy, int32_t dx, int32_t dy);

        void PlaceElement(char ch, int32_t x, int32_t y);


    private:

        std::vector<std::vector<char>> maze{
                {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
                {'X', 'H', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
                {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
                {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
                {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
                {'X', ' ', ' ', ' ', ' ', ' ', ' ', 'X', ' ', 'E'},
                {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
                {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
                {'X', 'S', 'X', 'X', ' ', ' ', ' ', ' ', ' ', 'X'},
                {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}};

    };


}