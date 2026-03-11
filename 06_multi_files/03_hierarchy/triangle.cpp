#include <iostream>
#include "triangle.hpp"

void Triangle::printParam() {
        std::cout << std::endl;
        std::cout << name << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }

