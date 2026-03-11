#include "qudrangle.hpp"
#pragma once

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double A, double B)
        : Quadrangle("Параллелограмм", a, b, a, b, A, B, A, B) {}
};