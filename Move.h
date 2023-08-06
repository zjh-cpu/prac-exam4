#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {
public:
    virtual ~Move() {}
    virtual std::string getName() const = 0;
    virtual bool beats(const Move& other) const = 0; // Determines if this move beats another move
};

#endif
