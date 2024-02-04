
#include "../../../include/dkeep/logic/hero.h"

namespace dkeep::logic {


    Hero::Hero(Maze *maze, int x0, int y0) : Element(maze, x0, y0) {
        is_armed_ = false;
        has_key_ = false;
        ch = 'H';
        this->maze_ = maze;
   }

    bool Hero::IsArmed() {
        return is_armed_;
    }

    bool Hero::HasKey() {
        return has_key_;
    }

    char Hero::GetCH() {
        return ch;
    }

    void Hero::SetArmed(bool is_armed) {
        this->is_armed_ = is_armed;
        if (is_armed) {
            this->ch = 'A';
        }
        int32_t x = GetX();
        int32_t y = GetY();
        maze_->PlaceElement(ch, GetX(), GetY());
    }

    void Hero::SetHasKey(bool has_key) {
        this->has_key_ = has_key;
    }


}