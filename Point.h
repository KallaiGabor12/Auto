//
// Created by TurboBoost on 2025. 09. 18..
//

#ifndef AUTO_POINT_H
#define AUTO_POINT_H


class Point {
public:
    Point() = default;
    Point(int x, int y);

    void setX(int value);
    int getX() const;
    void setY(int value);
    int getY();
private:
    int x;
    int y;
};



#endif //AUTO_POINT_H
