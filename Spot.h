#include <iostream>
#include <tuple>
#include <random>
#include <cmath>

class Spot {
private:
    std::tuple<int, int> location;
    char category;

public:
    Spot(int x, int y, char category) : location(x, y), category(category) {}

    std::tuple<int, int> getLoc() {
        return location;
    }

    char getCategory() {
        return category;
    }

    void setLoc(int x, int y) {
        location = std::make_tuple(x, y);
    }

    void setCategory(char new_category) {
        category = new_category;
    }
};