#include "qudrangle.hpp"
#pragma once

class Romb : public Quadrangle {
public:
    Romb(double a, double A, double B)
        : Quadrangle("Ромб", a, a, a, a, A, B, A, B) {}
};