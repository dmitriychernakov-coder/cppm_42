#pragma once
#include "triangle.hpp"

class IsoTriangle : public Triangle {
public:
    IsoTriangle(double a, double b, double A, double B)
        : Triangle("Равнобедренный треугольник", a, b, a, A, B, A) {} 
};