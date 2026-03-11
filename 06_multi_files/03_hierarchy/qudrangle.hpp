#include <iostream>
#include "figure.hpp"
#pragma once

class Quadrangle : public Figure {
protected:
    double a, b, c, d, A, B, C, D;
public:
     Quadrangle(const std::string& name, double a, double b, double c, double d, double A, double B, double C, double D)
        : Figure() {
            this -> name = name;
            this -> a = a;
            this -> b = b;
            this -> c = c;
            this -> d = d;
            this -> A = A;
            this -> B = B;
            this -> C = C;
            this -> D = D; 
        };
    void printParam()  override;
    
};