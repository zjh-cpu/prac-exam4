#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    auto move1 = player1->makeMove();
    auto move2 = player2->makeMove();
    if (move1->getName() == move2->getName()) return nullptr; // Draw
    return move1->beats(*move2) ? player1 : player2;
}
