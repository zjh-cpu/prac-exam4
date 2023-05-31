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

class Influence {
public:
    virtual void implement(Spot& spot) = 0; // pure virtual function
};

class Assists {
public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> disWidth(0, matrixWidth - 1);
        std::uniform_int_distribution<> disHeight(0, matrixHeight - 1);
        
        return std::make_tuple(disWidth(gen), disHeight(gen));
    }

    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
        int x1 = std::get<0>(loc1);
        int y1 = std::get<1>(loc1);
        int x2 = std::get<0>(loc2);
        int y2 = std::get<1>(loc2);
        
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};
