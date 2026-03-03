// Name        : main.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Figure side count in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

class Figure
{
private:
    std::string name;
    int countSides;
public:
    Figure() : name("Фигурка: "), countSides(0) {}
    Figure(const std::string& nameFigure, int count)
        :name(nameFigure),countSides(count) {}
    
    int getSidesCount() const{
        return countSides;
    }

    std::string getNameFigure() const{
        return name;
    }
};

//Figure, Triangle и Quadrangle
class Triangle : public Figure {
public:
    Triangle() : Figure("Треугольник: ", 3) {}
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure("Четырехугольник: ", 4) {}
};

int main(int argc, char** argv) {
    std::cout << "Количество сторон:" << std::endl;
    Figure newFigure;
    std::cout << newFigure.getNameFigure() << newFigure.getSidesCount() << std::endl;
    Triangle triagle;
    std::cout << triagle.getNameFigure() << triagle.getSidesCount() << std::endl;
    Quadrangle quadrangle;
    std::cout << quadrangle.getNameFigure() << quadrangle.getSidesCount() << std::endl;
    return 0;
}