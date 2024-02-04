#include "../../include/interaction/user.h"
#include "iostream"
#include <limits>


namespace interaction {

    user::user() {
        user_input_ = 0;
    }

    int user::GetUserInput()  {
        std::cout << "Enter an integer number: ";
        std::cin >> user_input_;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return user_input_;
    }

} // interaction


