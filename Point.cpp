//
// Created by TurboBoost on 2025. 09. 18..
//

#include "Point.h"

Point::Point(double x, double y) : x{x}, y{y} {
}

void Point::setX(int value) {
    this->x = value;
}

double Point::getX() const {
    return this->x;
}

void Point::setY(int value) {
    this->y = value;
}

double Point::getY() {
    return this->y;
}
