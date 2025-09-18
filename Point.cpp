//
// Created by TurboBoost on 2025. 09. 18..
//

#include "Point.h"

Point::Point(int x, int y) : x{x}, y{y} {
}

void Point::setX(int value) {
    this->x = value;
}

int Point::getX() const {
    return this->x;
}

void Point::setY(int value) {
    this->y = value;
}

int Point::getY() {
    return this->y;
}
