//
// Created by TurboBoost on 2025. 09. 18..
//

#ifndef AUTO_POINT_H
#define AUTO_POINT_H


class Point {
public:
    Point() = default;
    Point(double x, double y);

    void setX(int value);
    double getX() const;
    void setY(int value);
    double getY();
private:
    double x;
    double y;
};



#endif //AUTO_POINT_H
