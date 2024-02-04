#pragma once

#include "iostream"
#include "string"
#include "vector"
#include "cstdint"
#include "climits"

namespace dkeep::interaction {

    class User {
    public:
        explicit User();
        ~User();

        char GetUserCommand();
        void PrintMaze(const std::vector<std::vector<char>>& maze);
        int32_t AskNumberOfDragons();
        int32_t getNumberOfDragons();

    private:
        char user_command_;
        int32_t number_of_dragons_;
    };

} // namespace dkeep::interaction

