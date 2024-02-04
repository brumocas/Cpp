#include "../../../include/dkeep/logic/game.h"

namespace dkeep::logic {

    Game::Game(int ndragons) {

        maze_ = new Maze();
        hero_ = new Hero(maze_, 1, 1);
        sword_ = new Element(maze_, 8, 1);

        CreateDragons(ndragons);
    }

    Game::~Game() {
    }

    std::vector<std::vector<char>> Game::GetMaze() {
        return maze_->GetMaze();
    }

    bool Game::UpdateGame(char &uc) {

        // Game Loop Key options
        switch (uc) {
            case 'w':
                return UpdateTurn(Direction::kNorth);
            case 's':
                return UpdateTurn(Direction::kSouth);
            case 'd':
                return UpdateTurn(Direction::kEast);
            case 'a':
                return UpdateTurn(Direction::kWest);
        }

        return false;
    }


    bool Game::UpdateTurn(Direction dir) {
        if (!TryExit(dir)) {
            hero_->Move(hero_->GetCH(), dir);

            if (!hero_->IsArmed()) {
                TryToPickSword();
            }
            if ((!AreAllDragonsDead()) && (!DragonsKilledHero())) {
                return DragonsMove();
            } else if (AreAllDragonsDead()) {
                return false;
            } else return true;
        } else return true;
    }

    bool Game::TryExit(const Direction dir) {
        int32_t x = hero_->GetX();
        int32_t y = hero_->GetY();

        if (maze_->IsThere('E', x, y, dir)) {
            if (hero_->HasKey()) {
                std::cout << "GREAT! YOU REACHED THE EXIT!" << std::endl;
                return true;
            } else {
                std::cout << "You need a key to open this door." << std::endl;
                return false;
            }
        }

        return false;
    }

    void Game::TryToPickSword() {
        if (hero_->IsArmed()) return;

        if (hero_->TryOverlap(sword_)) {
            hero_->SetArmed(true);
        }
    }


    bool Game::AreAllDragonsDead() {
        for (Dragon *dragon: *dragons) {
            if (dragon->IsAlive()) {
                return false;
            }
        }
        return true;
    }

    void Game::CreateDragons(int ndragons) {
        dragons = new std::vector<Dragon *>(ndragons);

        for (int i = 0; i < ndragons; i++) {
            (*dragons)[i] = new Dragon(maze_, 1 + i, 8);
            maze_->PlaceElement('D', 1 + i, 8);
            /*
             * You cannot use push_back when you preallocated the memory for the vector.
             * If you do e.g. ndragons = 4, using push_back adds new elements to the vector
             * with initial size of 4!!!
             */
        }
    }


    bool Game::DragonsKilledHero() {
        for (Dragon* dragon : *dragons) {
            if ((dragon->IsAlive()) && (dragon->AdjacentTo(hero_))) {
                if (hero_->IsArmed()) {
                    dragon->SetAlive(false);
                    maze_->ClearCell(dragon->GetX(), dragon->GetY());
                    hero_->SetHasKey(AreAllDragonsDead());
                } else {
                    std::cout << "YOU DIED!" <<std::endl;
                    return true;
                }
            }
        }
        return false;
    }

    bool Game::DragonsMove() {
        for (Dragon* dragon : *dragons) {
            if (!dragon->IsAlive()) continue;
            dragon->MoveDragons();
        }
        return DragonsKilledHero();
    }


}


