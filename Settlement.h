//
// Created by TurboBoost on 2025. 09. 18..
//

#ifndef AUTO_SETTLEMENT_H
#define AUTO_SETTLEMENT_H

#include "Point.h"
#include <iostream>
#include <vector>

class Settlement {
public:
    explicit Settlement(const std::string& line);

    void setPopulation(const int population);

    std::string getName() const;
    int getPopulation() const;
    bool has_charger() const;
    Point getLocation() const;

private:
   std::string name;
    int population;
    bool hasCharger;
    Point location{};
};


#endif //AUTO_SETTLEMENT_H