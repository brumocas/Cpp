#include <iostream>
#include <vector>
#include <cstdint>


// Global variables necessary to use in the functions and main code!
// Alternative would be to pass as parameters like the hx, hy variables (Hero's location), or the maze structure
int32_t maze_height_ = 10;
int32_t maze_width_ = 10;
bool hero_has_key = false;
bool is_game_over = false;

void print_maze(std::vector<std::vector<char>> &maze) {
    for (int32_t i = 0; i < maze_width_; i++) {
        for (int32_t j = 0; j < maze_height_; j++) {
            std::cout << maze[i][j] << " ";

        }
        std::cout << std::endl;
    }
}

// Function to ensure we do not try to access bad memory places, outside vector limits!
bool is_cell_inside_map(int32_t x, int32_t y) {
    if (x < 0 && y < 0 && x >= maze_width_ && y >= maze_height_) {
        std::cout << "Outside Maze Boundaries!" << std::endl;
        return false;
    } else {    
        return true;
    }
}

// Will return true if the dragon is found near (x,y)
bool check_for_dragon(int32_t x, int32_t y, std::vector<std::vector<char>> &maze) {
    // returns true if there is a dragon!
    if (!is_cell_inside_map(x, y)) {
        std::cout << "WARNING! Trying to access invalid zones (" << x << ", " << y << ")" << std::endl;
        return false;

    }

    // to avoid access to non-existent memory places!
    if (is_cell_inside_map(x + 1, y)) {
        if (maze[x + 1][y] == 'D') {
            return true;
        }
    }

    if (is_cell_inside_map(x, y + 1)) {

        if (maze[x][y + 1] == 'D') {
            return true;
        }
    }

    if (is_cell_inside_map(x - 1, y)) {

        if (maze[x - 1][y] == 'D') {
            return true;
        }
    }
    if (is_cell_inside_map(x, y - 1)) {

        if (maze[x][y - 1] == 'D') {
            return true;
        }
    }

    if (maze[x][y] == 'D') {
        std::cout << "You should not be able to be here!" << std::endl;
        return true;
    }

    return false;
}


// returns: -1 for error;
//           0 for dragon;
//           1 for free cell
//           2 for Exit cell
//           3 for the Key
//           4 found an X;
int32_t is_cell_free(int32_t x, int32_t y, std::vector<std::vector<char>> &maze) {



    if (!is_cell_inside_map(x, y)) {
        std::cout << "Trying to access cell outside maze!" << std::endl;
        return -1;
    }

    if (maze[x][y] == ' ' && !check_for_dragon(x, y, maze)) {
        // cell is free. Proceed!
        return 1;
    } else if (maze[x][y] == ' ') {
        // simpler than repeating the function check_for_dragon
        // here there is a dragon nearby!
        return 0;
    } else if (maze[x][y] == 'E') {
        // this cell is the Exit. Check if Hero has the Key
        return 2;
    } else if (maze[x][y] == 'K') {
        return 3;
    } else if (maze[x][y] == 'X'){
        return 4;
    }
}

// Move Hero from (hx, hy) to (x,y), if possible!
void move_from_to_cell(int32_t *hx, int32_t *hy, int32_t x, int32_t y, std::vector<std::vector<char>> &maze) {
    int32_t a = is_cell_free(x, y, maze);

    if (a == -1) {
        // Trying to leave the maze limits
        std::cout << "Invalid Move" << std::endl;
    } else if (a == 0) {
        // Reached the dragon
        std::cout << "You Died!\n" << std::endl;
        maze[x][y] = '(';
        maze[*hx][*hy] = ' ';
        is_game_over = true;
    } else if (a == 1) {
        // Move to a free place
        maze[x][y] = 'H';
        maze[*hx][*hy] = ' ';
    } else if (a == 2 && hero_has_key) {
        // Reached the exit and have the key!
        std::cout << "You Won!!\n" << std::endl;
        maze[x][y] = 'H';
        maze[*hx][*hy] = ' ';
        is_game_over = true;
    } else if (a == 3) {
        // Reached the Key
        maze[x][y] = 'H';
        maze[*hx][*hy] = ' ';
        hero_has_key = true;
    }


    if (a == 2 && !hero_has_key) {
      // Reached the exit without the key!
    } else if (a > -1 && a < 4) {
        // Update Hero Position
        *hx = x;
        *hy = y;
    }
}

int main(int argc, char **argv) {

    // Store the maze
    std::vector<std::vector<char>> maze{
            {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
            {'X', 'H', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
            {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
            {'X', 'D', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
            {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
            {'X', ' ', ' ', ' ', ' ', ' ', ' ', 'X', ' ', 'E'},
            {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
            {'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
            {'X', 'K', 'X', 'X', ' ', ' ', ' ', ' ', ' ', 'X'},
            {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}};


    // Initial Hero Position
    int32_t hx = 1, hy = 1;
    char pressed_key;

    print_maze(maze);

    while (!is_game_over) {

        // - read user command
        std::cout << "cmd> ";
        std::cin >> pressed_key;

        // Game Loop Key options
        switch (pressed_key) {
            case 'd':// Right
                move_from_to_cell(&hx, &hy, hx, hy + 1, maze);
                break;
            case 's': // Down
                move_from_to_cell(&hx, &hy, hx + 1, hy, maze);
                break;
            case 'a': // Left
                move_from_to_cell(&hx, &hy, hx, hy - 1, maze);
                break;
            case 'w': // Up
                move_from_to_cell(&hx, &hy, hx - 1, hy, maze);
                break;
        }
        print_maze(maze);

    }
    return 0;
}
