#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

#include  "Settlement.h"


std::vector<Settlement> readFile(const std::string& path) {
    std::ifstream file(path);;
    std::vector<Settlement> lines;

    if (!file.is_open())
        std::cout << "Couldn't open file\n";

    std::string line;

    if (getline(file, line))

    while (getline(file, line)) {
        lines.emplace_back(line);
    }
    file.close();
    return lines;
}

double calculateDistance(Point first,Point second) {
    return std::sqrt(std::pow(first.getX() - second.getX(), 2) +
                        std::pow(first.getY() - second.getY(), 2));
}

bool isEnoughFeul(const std::vector<Settlement>& settlements, double fuel) {
    const double initalFuel = fuel;
    for (size_t i = 1; i < settlements.size(); ++i) {
        double distance = calculateDistance(settlements[i - 1].getLocation(), settlements[i].getLocation());
        if (fuel < distance)
            return false;

        fuel -= distance;

        if (settlements[i].has_charger())
            fuel = initalFuel;
    }
    return true;
}

int main() {
    std::vector<Settlement> settlements = readFile("test.txt");
    return 0;
}