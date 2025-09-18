//
// Created by TurboBoost on 2025. 09. 18..
//

#include "Settlement.h"

#include <ranges>
#include <vector>
#include <sstream>

std::vector<std::string> split(const std::string& str, const char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string item;

    while (std::getline(ss, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}

Settlement::Settlement(const std::string& line) {
    std::vector<std::string> lines = split(line, ';');

    name = lines[0];
    setPopulation(std::stoi(lines[1]));
    hasCharger = (lines[2] == "1" || lines[2] == "true");
    location = Point(std::stoi(lines[3]), std::stoi(lines[4]));
}

void Settlement::setPopulation(const int population) {
    if (population < 0){
        std::cerr << "Population size must be greater than 0." << std::endl;
        throw std::invalid_argument("Population cannot be negative");
}
    this->population = population;
}

std::string Settlement::getName() const {
    return name;
}

int Settlement::getPopulation() const {
    return population;
}

bool Settlement::has_charger() const {
    return hasCharger;
}

Point Settlement::getLocation() const {
    return location;
}
