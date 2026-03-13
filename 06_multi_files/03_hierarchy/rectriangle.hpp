#pragma once
#include "triangle.hpp"

class RecTriangle : public Triangle {
public:
    RecTriangle(double a, double b, double c, double A, double B)
        : Triangle("Прямоугльный треугольник", a, b, c, A, B, 90) {} 
};
