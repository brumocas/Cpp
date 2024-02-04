#include "../../../include/dkeep/logic/element.h"

namespace dkeep::logic {


    Element::Element(Maze *maze, int x, int y) {
        this->maze = maze;
        this->x = x;
        this->y = y;
    }

    int32_t Element::GetX() {
        return x;
    }

    int32_t Element::GetY() {
        return y;
    }

    void Element::SetX(int32_t x) {
        this->x = x;
    }

    void Element::SetY(int32_t y) {
        this->y = y;
    }


    bool Element::Move(char ch, const Direction dir) {
        int delta_x = 0;
        int delta_y = 0;

        // Check direction
        if (dir == Direction::kNorth) delta_x = -1;
        if (dir == Direction::kSouth) delta_x = 1;
        if (dir == Direction::kEast) delta_y = 1;
        if (dir == Direction::kWest) delta_y = -1;

        // Check if it is possible to move the hero in the maze
        if (maze->CanMoveInto(x + delta_x, y + delta_y)) {
            // - update representation in the maze
            maze->MoveElement(ch, x, y, x + delta_x, y + delta_y);

            // - update pose (x,y)
            x += delta_x;
            y += delta_y;

            return true;
        }

        return false;
    }

    bool Element::TryOverlap(Element *other) {
        return ((x == other->x) && (y == other->y));
    }

    bool Element::AdjacentTo(Element *other) {
        if ((x - 1 == other->x) && (y == other->y)) return true;   // north
        if ((x + 1 == other->x) && (y == other->y)) return true;   // south
        if ((x == other->x) && (y + 1 == other->y)) return true;   // east
        if ((x == other->x) && (y - 1 == other->y)) return true;   // west
        return false;
    }


}