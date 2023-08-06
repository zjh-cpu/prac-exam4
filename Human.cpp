#include "Player.h"
#include "Rock.h"
#include "Paper.h"
// ... other moves

class Human : public Player {
public:
    std::unique_ptr<Move> makeMove() override;
    std::string getName() const override { return "Human"; }
};

std::unique_ptr<Move> Human::makeMove() {
    std::string choice;
    std::cout << "Enter Move: ";
    std::cin >> choice;
    if (choice == "Rock") return std::make_unique<Rock>();
    // ... other moves
    // Note: Add error handling for invalid moves
}
