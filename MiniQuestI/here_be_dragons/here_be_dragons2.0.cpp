#include <iostream>
#include <random>   
using namespace std;

#define size 10

int check_maze(int maze[size][size], int i, int k, int character){

    switch (character)
    {
    case 5:

        if (maze[i][k]!= 1 && maze[i][k]!=4)
        {
            return 1;
        }
        else
        return 0;       
    
        break;
    
    case 2:

        if (maze[i][k]!= 1 && maze[i][k]!=5 && maze[i][k]!=4)
        {
            return 1;
        }
        else
        return 0;
    
    case 3:

        if (maze[i][k]!= 1 && maze[i][k]!=2 && maze[i][k]!=5 && maze[i][k]!=4)
        {   
            // Check forbidden positions in the left for the Dragon
            if( ((i == 6 && k == 1) || i == 5 && k == 1) && (maze[8][1] == 2 || maze[7][1] == 2))
            break;

            // Dragon cant stop the exit
            if ( (i == 8 && (k == 4 || k == 5 || k == 6)))
            break;

            /*
            // Check Dragon and key colisions
            if(1)
            break;

            // Check Dragon and Hero colisions
            if(1)
            break;
            */
            
            if(1)
            return 1;

        }
        else
        return 0;

    default:
        break;
    }

    return 0;
}

void print_maze(int maze[size][size]){
    // Access and print elements of the 2D char array
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            switch (maze[i][j])
            {
            case 1:
                cout << "X ";
                break;

            case 2:
                cout << "H ";
                break;
            
            case 0:
                cout << "  ";
                break;

            case 3:
                cout << "D ";
                break;

            case 4:
                cout << "E " ;
                break;

            case 5:
                cout << "K ";
                break;

            default:
                cout << "Invalid character\n" ;
                break;
            }
        }
        cout << endl;
    }
    cout << endl;
}

int find_pos(int position[size][size], int& i, int& k, int character)
{
    // Find the current character position
    for(i = 0; i < size; i++)
    {
        for (k = 0; k < size; k++)
        {   
            if (position[i][k] == character)  
            return 1;
        }
    }
    return 0;
}

int move_hero(int pos[size][size], char move, bool& key){
    
    int i = 0, k = 0;

    // Check if the movement is valid
        switch (move)
        {
        case 'w':
            // Find Hero position
            if(find_pos(pos, i, k, 2))
            {   
                // Check if you pick the key
                if (pos[i - 1][k] == 5 && key == false)
                key = true;

                // Check if you hit the wall
                if (pos[i - 1][k] != 1 && pos[i - 1][k] != 4)
                {
                    pos[i - 1][k] = 2;
                    pos[i][k] = 0;
                }

                print_maze(pos);

                // Check if you hit the Dragon
                if (pos[i - 2][k] == 3 || pos[i - 1][k - 1] == 3 || pos[i - 1][k + 1] == 3)
                return 0;

                // Check if you are able to exit game
                if (pos[i - 1][k] == 4 && key == true)
                return 2;
            }
            return 1;
            break;

        case 's':
            // Find Hero position
            if(find_pos(pos, i, k, 2))
            {   
                // Check if you pick the key
                if (pos[i + 1][k] == 5 && key == false)
                key = true;

                // Check if you hit the wall
                if (pos[i + 1][k] != 1 && pos[i + 1][k] != 4)
                {

                    pos[i + 1][k] = 2;
                    pos[i][k] = 0;
                }

                print_maze(pos);

                // Check if you hit the Dragon
                if (pos[i + 2][k] == 3 || pos[i + 1][k - 1] == 3 || pos[i + 1][k + 1] == 3)
                return 0;

                // Check if you are able to exit game
                if (pos[i + 1][k] == 4 && key == true)
                return 2;

            }
            return 1;
            break;

        case 'a':
            // Find Hero position
            if(find_pos(pos, i, k, 2))
            {
                // Check if you pick the key
                if (pos[i][k - 1] == 5 && key == false)
                key = true;   

                // Check if you hit the wall
                if (pos[i][k - 1] != 1 && pos[i][k + 1] != 4)
                {

                    pos[i][k - 1] = 2;
                    pos[i][k] = 0;
                }

                print_maze(pos);

                // Check if you hit the Dragon
                if (pos[i][k - 2] == 3 || pos[i + 1][k - 1] == 3 || pos[i - 1][k - 1] == 3)
                return 0;

                // Check if you are able to exit game
                if (pos[i][k - 1] == 4 && key == true)
                return 2;

            }
            return 1;
            break;

        case 'd':
            // Find Hero position
            if(find_pos(pos, i, k, 2))
            { 
                // Check if you pick the key
                if (pos[i][k + 1] == 5 && key == false)
                key = true;

                // Check if you hit the wall
                if (pos[i][k + 1] != 1 && pos[i][k + 1] != 4)
                {
                    pos[i][k + 1] = 2;
                    pos[i][k] = 0;
                }

                print_maze(pos);

                // Check if you hit the Dragon
                if (pos[i][k + 2] == 3 || pos[i - 1][k + 1] == 3 || pos[i + 1][k + 1] == 3)
                return 0;

                // Check if you are able to exit game
                if (pos[i][k + 1] == 4 && key == true)
                return 2;

            }
            return 1;       
            break;

        default:
            cout << "Invalid move\n";
            break;
        }

return 0;
}


int main()
{
    cout << "/-----------Here be dragons Game--------------/\n\n";

    // Create the maze 2D array
    /*  
          -> Empty Cell
        X -> Wall
        H -> Hero
        D -> Dragon
        E -> Exit
        K -> Key
    */

    // 2D array to save positions
    /*  
        0 -> empty cell
        1 -> wall
        2 -> Hero
        3 -> Dragon
        4 -> Exit
        5 -> Key
    */
    int maze_pos[size][size] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,1,1,0,1,0,1,0,1},
        {1,0,1,1,0,1,0,1,0,1},
        {1,0,1,1,0,1,0,1,0,1},
        {1,0,0,0,0,0,0,1,0,4},
        {1,0,1,1,0,1,0,1,0,1},
        {1,0,1,1,0,1,0,1,0,1},
        {1,0,1,1,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1},  
    };

    // Create a random number generator engine
    random_device rd; // Seed for the random number generator
    mt19937 gen(rd()); // Mersenne Twister pseudo-random number generator

    // Define a distribution for the range of integers you want
    uniform_int_distribution<int> distribution(0, 9); // Range from 0 to 10
    
    int i, k;

    // Random Generate Key pos
    do
    {
        i = distribution(gen);
        k = distribution(gen);

    } while (!check_maze(maze_pos, i, k, 5));
    
    maze_pos[i][k] = 5;

    // Random Generate Hero pos
    do
    {
        i = distribution(gen);
        k = distribution(gen);

    } while (!check_maze(maze_pos, i, k, 2));
    
    maze_pos[i][k] = 2;

    // Random Generate Dragon pos
    do
    {
        i = distribution(gen);
        k = distribution(gen);

    } while (!check_maze(maze_pos, i, k, 3));
    
    maze_pos[i][k] = 3;

    print_maze(maze_pos);
    
    // Bool to save the key status
    bool key = false;

    while (true)
    {   
        // Get Hero next move
        char movement;
        cout << "Insert your next movement:\n";
        cin >> movement;
        cin.ignore();

        // Press 'q' or 'Q' to quit the game
        if(movement == 'q' || movement == 'Q')
        break;

        int status = move_hero(maze_pos, movement, key);

        if(!status)
        {
            cout << "GAME OVER\n";
            break;
        }

        if(status == 2)
        {
            cout << "YOU WIN\n";
            print_maze(maze_pos);
            break;
        }
    }
}