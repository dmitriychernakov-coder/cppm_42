#include "triangle.hpp"
#pragma once

class EquTriangle : public Triangle {
public:
    EquTriangle(double a, double A)
        : Triangle("Равносторонний треугольник", a, a, a, A, A, A) {} 
};