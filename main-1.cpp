#include "Assists.h"
#include "Spot.h"
#include "Influence.h"
#include <iostream>

int main() {
    // Create a spot
    Spot spot(5, 5, 'A');
    std::cout << "Initial Spot location: " << std::get<0>(spot.getLoc()) << ", " << std::get<1>(spot.getLoc()) << std::endl;
    std::cout << "Initial Spot category: " << spot.getCategory() << std::endl;

    // Modify the spot
    spot.setLoc(6, 6);
    spot.setCategory('B');
    std::cout << "Modified Spot location: " << std::get<0>(spot.getLoc()) << ", " << std::get<1>(spot.getLoc()) << std::endl;
    std::cout << "Modified Spot category: " << spot.getCategory() << std::endl;

    // Create a random location
    auto randomLoc = Assists::createRandomLoc(10, 10);
    std::cout << "Random location: " << std::get<0>(randomLoc) << ", " << std::get<1>(randomLoc) << std::endl;

    // Evaluate distance
    double distance = Assists::evaluateDistance(spot.getLoc(), randomLoc);
    std::cout << "Distance: " << distance << std::endl;

    return 0;
}
