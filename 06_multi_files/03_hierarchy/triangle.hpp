#pragma once
#include "figure.hpp"

class Triangle : public Figure {
protected:
    double a, b, c, A, B, C;
public:
     Triangle(const std::string& name, double a, double b, double c, double A, double B, double C)
        : Figure() {
            this -> name = name;
            this -> a = a;
            this -> b = b;
            this -> c = c;
            this -> A = A;
            this -> B = B;
            this -> C = C; 
        };
    void printParam() override;
};