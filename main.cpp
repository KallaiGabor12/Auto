#include <iostream>
#include <fstream>
#include <vector>

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

int main() {
    std::vector<Settlement> settlements = readFile("Test.txt");
    for (auto settlement : settlements) {
        std::cout << settlement.getName() << "\n";
    }
    return 0;
}