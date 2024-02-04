#include "../../../include/dkeep/interaction/interaction.h"
#include "iostream"
#include <limits>
#include <string>


namespace dkeep::interaction {

    User::User() {
        user_command_ = ' ';
        number_of_dragons_ = 1;
    }

    User::~User() {

    }


    int32_t User::getNumberOfDragons() {
        return number_of_dragons_;
    }


    void User::PrintMaze(const std::vector<std::vector<char>> &maze) {

        for (int32_t i = 0; i < maze.size(); i++) {
            for (int32_t j = 0; j < maze[i].size(); j++) {
                std::cout << maze[i][j] << " ";
            }
            std::cout << std::endl;
        }

    }

    char User::GetUserCommand() {
        std::cin >> user_command_;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return user_command_;
    }

    int32_t User::AskNumberOfDragons() {
        do {
            std::cout << "How many dragons are in the maze? (1-4) ";

            char n;
            std::cin >> n;
            std::string nstr(1, n);

            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');

            try {
                number_of_dragons_ = std::stoi(nstr);
                if ((number_of_dragons_ <= 0) || (number_of_dragons_ > 4))
                    throw std::invalid_argument("Number must be between 1 and 4");

                return number_of_dragons_;
            } catch (std::invalid_argument &e) {
                std::cout << "Please enter a valid number" << std::endl;
            }

        } while (true);
    }

} // namespace dkeep::interaction