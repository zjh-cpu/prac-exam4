#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human humanPlayer;
    Computer computerPlayer;
    Referee ref;

    Player* winner = ref.refGame(&humanPlayer, &computerPlayer);
    if (!winner) {
        std::cout << "It's a draw!" << std::endl;
    } else {
        std::cout << winner->getName() << " wins!" << std::endl;
    }

    return 0;
}
