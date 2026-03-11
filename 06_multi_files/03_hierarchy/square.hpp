#include "qudrangle.hpp"
#pragma once


class Square : public Quadrangle {
public:
    Square(double a)
        : Quadrangle("Квадрат",a, a, a, a, 90, 90, 90, 90) {}
};