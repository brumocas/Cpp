#include <iostream>
#include "cstdint"

#include "../include/dkeep/interaction/interaction.h"
#include "../include/dkeep/logic/game.h"
#include "../include/dkeep/logic/dragon.h"


int main(int argc, char **argv) {

    bool is_game_over = false;
    char pressed_key;
    dkeep::interaction::User *user_interaction = new dkeep::interaction::User();

    int32_t ndragons = user_interaction->AskNumberOfDragons();

    dkeep::logic::Game game(ndragons);

    while (!is_game_over) {

        // Print the maze
        user_interaction->PrintMaze(game.GetMaze());

        // Read user command
        pressed_key = user_interaction->GetUserCommand();

        // Update the game
        is_game_over = game.UpdateGame(pressed_key);

        user_interaction->PrintMaze(game.maze_->GetMaze());
    }


    return 0;
}