
#include "../../../include/dkeep/logic/maze.h"

namespace dkeep::logic {

    Maze::Maze() {

    }

    std::vector<std::vector<char>> &Maze::GetMaze() {
        return maze;
    }

    void Maze::ClearCell(int32_t x, int32_t y) {
        maze[x][y] = ' ';
    }

    bool Maze::IsThere(char ch, int32_t here_x, int32_t here_y, Direction dir) {
        if ((dir == Direction::kNorth) && (maze[here_x - 1][here_y] == ch))
            return true;
        if ((dir == Direction::kSouth) && (maze[here_x + 1][here_y] == ch))
            return true;
        if ((dir == Direction::kEast) && (maze[here_x][here_y + 1] == ch))
            return true;
        if ((dir == Direction::kWest) && (maze[here_x][here_y - 1] == ch))
            return true;

        return false;
    }

    bool Maze::CanMoveInto(int32_t x, int32_t y) {
        return ((maze[x][y] == ' ') || (maze[x][y] == 'S'));
    }


    void Maze::MoveElement(char ch, int32_t sx, int32_t sy, int32_t dx, int32_t dy) {
        maze[sx][sy] = ' ';
        maze[dx][dy] = ch;
    }

    void Maze::PlaceElement(char ch, int32_t x, int32_t y) {
        maze[x][y] = ch;
    }
}

