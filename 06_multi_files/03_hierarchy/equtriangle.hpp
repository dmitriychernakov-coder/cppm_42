#pragma once
#include "triangle.hpp"

class EquTriangle : public Triangle {
public:
    EquTriangle(double a, double A)
        : Triangle("Равносторонний треугольник", a, a, a, A, A, A) {} 
};