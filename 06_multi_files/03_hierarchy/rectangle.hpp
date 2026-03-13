#pragma once
#include "qudrangle.hpp"

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b)
        : Quadrangle("Прямоугольник", a, b, a, b, 90, 90, 90, 90) {}
};