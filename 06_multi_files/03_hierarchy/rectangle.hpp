#include "qudrangle.hpp"
#pragma once

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b)
        : Quadrangle("Прямоугольник", a, b, a, b, 90, 90, 90, 90) {}
};