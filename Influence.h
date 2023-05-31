#include<iostream>
#include <tuple>
#include <random>
#include <cmath>

class Influence {
public:
    virtual void implement(Spot& spot) = 0; // pure virtual function
};