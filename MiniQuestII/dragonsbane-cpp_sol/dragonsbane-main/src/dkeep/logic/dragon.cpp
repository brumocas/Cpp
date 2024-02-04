#include "iostream"
#include "ctime"
#include "cstdlib"

#include "../../../include/dkeep/logic/dragon.h"

namespace dkeep::logic {

    Dragon::Dragon(Maze *maze, int x, int y) : Element(maze, x, y) {
        alive_ = true;
        over_sword_ = false;
        srand(time(NULL));
    }

    bool Dragon::IsAlive() {
        return alive_;
    }

    void Dragon::SetAlive(bool alive) {
        this->alive_ = alive;
    }

    void Dragon::MoveDragons() {
        std::vector<int> possible_dir{
                static_cast<int>(Direction::kNorth),
                static_cast<int>(Direction::kSouth),
                static_cast<int>(Direction::kEast),
                static_cast<int>(Direction::kWest),
        };
        int here_x = GetX();
        int here_y = GetY();

        Direction dir = static_cast<Direction>(possible_dir[rand() % 4]);

        if (over_sword_) {
            if (Move('D', dir)) {
                maze->PlaceElement('S', here_x, here_y);
                over_sword_ = false;
            }
            return;

        } else {
            if (maze->IsThere('S', here_x, here_y, dir)) {
                Move('F', dir);
                over_sword_ = true;
            }
        }
        Move('D', dir);
    }
   // function to move the Dragons

}