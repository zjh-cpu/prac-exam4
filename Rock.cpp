#include "Move.h"

class Rock : public Move {
public:
    std::string getName() const override { return "Rock"; }
    bool beats(const Move& other) const override {
        std::string otherMove = other.getName();
        return otherMove == "Scissors" || otherMove == "Zombie";
    }
};
