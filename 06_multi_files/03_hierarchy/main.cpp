#include <iostream>
#include "headers.hpp"

int main(int argc, char** argv) {
    Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
    triangle.printParam();
    RecTriangle recTriangle(10, 20, 30, 50, 60);
    recTriangle.printParam();
    IsoTriangle isoTriangle(20, 30, 30, 120);
    isoTriangle.printParam();  
    EquTriangle equTriangle(20, 60);
    equTriangle.printParam(); 

    Quadrangle quadrangle("Четырехугольник", 10, 20, 30, 40, 80, 100, 70, 110);
    quadrangle.printParam();
    Rectangle rectangle(10,20);
    rectangle.printParam();
    Square square(10);
    square.printParam();
    Parallelogram parallelogram(10, 20 ,100, 80);
    parallelogram.printParam();
    Romb romb(10, 120, 60);
    romb.printParam();

    return 0;
}