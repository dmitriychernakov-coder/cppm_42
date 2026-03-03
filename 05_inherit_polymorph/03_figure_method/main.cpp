#include <iostream>
#include<string>

class Figure {
protected:
    std::string name;
    int countSides = 0;
public:
    Figure(const std::string name, int counSides)
        : name(name), countSides(counSides) {}
    virtual void printParam() {
        std::cout << name << std::endl;
        std::cout << "Количество сторон: " << countSides << std::endl;
    }
    virtual bool check() {
        return countSides != 0;
    }

    std::string getName() const {
        return name;
    }
        
};

class Triangle : public Figure {
protected:
    double a, b, c, A, B, C;
public:
     Triangle(const std::string& name, double a, double b, double c, double A, double B, double C)
        : Figure(name,3) {
            this -> name = name;
            this -> a = a;
            this -> b = b;
            this -> c = c;
            this -> A = A;
            this -> B = B;
            this -> C = C; 
        };
    void printParam()  override {
        std::cout << "Количество сторон: " << countSides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
    bool check()  override {
        return (A + B + C) == 180 && countSides == 3;
    }
};

class RecTriangle : public Triangle {
public:
    RecTriangle(double a, double b, double c, double A, double B, double C)
        : Triangle("Прямоугльный треугольник", a, b, c, A, B, C) {} 
    bool check() override {
        return (A == 90 || B == 90 || C == 90 && Triangle::check());
    }
};

class IsoTriangle : public Triangle {
public:
    IsoTriangle(double a, double b, double c, double A, double B, double C)
        : Triangle("Равнобедренный треугольник", a, b, c, A, B, C) {} 
    bool check() override {
        return (a == c && A == C && Triangle::check());
    }
};

class EquTriangle : public Triangle {
public:
    EquTriangle(double a, double b, double c, double A, double B, double C)
        : Triangle("Равносторонний треугольник", a, b, c, A, B, C) {}
    bool check() override {
        return (((a == b) && (b == c)) && ((A == B)  && (B == C)) && Triangle::check());
    } 
};


class Quadrangle : public Figure {
protected:
    double a, b, c, d, A, B, C, D;
public:
     Quadrangle(const std::string& name, double a, double b, double c, double d, double A, double B, double C, double D)
        : Figure(name, 4) {
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
    void printParam()  override {
        std::cout << "Количество сторон: " << countSides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
    bool check()  override {
        return (A + B + C + D) == 360 && countSides == 4;
    }
    
};

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b, double c, double d, double A, double B, double C, double D)
        : Quadrangle("Прямоугольник", a, b, c, d, A, B, C, D) {}
    bool check() override {
        return ((a == c) && (b == d) && (A == 90 || B == 90 || C == 90 || D == 90) && Quadrangle::check());
    }
};

class Square : public Quadrangle {
public:
    Square(double a, double b, double c, double d, double A, double B, double C, double D)
        : Quadrangle("Квадрат",a, b, c, d, A, B, C, D) {}
    bool check() override {
        return (((a == c) && (c== b) && (b == d)) && (A == 90 || B == 90 || C == 90 || D == 90) && Quadrangle::check());
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D)
        : Quadrangle("Параллелограмм", a, b, c, d, A, B, C, D) {}
    bool check() override {
        return (((a == c) && (b == d)) && ((A == C) && (B ==  D)) && Quadrangle::check());
    }
};

class Romb : public Quadrangle {
public:
    Romb(double a, double b, double c, double d, double A, double B, double C, double D)
        : Quadrangle("Ромб", a, b, c, d, A, B, C, D) {}
    bool check() override {
        return (((a == c) && (c== b) && (b == d)) && (A == C || B == D) && Quadrangle::check());
    }
};

int main() {
    Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
    //triangle.printParam();
    RecTriangle recTriangle(10, 20, 30, 50, 40, 90);
    // recTriangle.printParam();
    IsoTriangle isoTriangle(30, 20, 30, 70, 40, 70);
    //isoTriangle.printParam();  
    EquTriangle equTriangle(30,30, 30, 60, 60, 60);
    // equTriangle.printParam(); 

    Quadrangle quadrangle("Четырехугольник", 10, 20, 30, 40, 80, 100, 70, 110);
    //quadrangle.printParam();
    Rectangle rectangle(20, 20, 30, 40, 80, 100, 70, 100);
    // rectangle.printParam();
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    // square.printParam();
    Parallelogram parallelogram(20, 30, 20, 30, 80, 100, 80, 100);
    // parallelogram.printParam();
    Romb romb(20, 20, 20, 20, 80, 100, 80, 100);
    // romb.printParam();

    Figure* figures[] = {
        &triangle, &recTriangle, &isoTriangle, &equTriangle,
        &quadrangle, &rectangle, &square, &parallelogram, &romb
    };

    for (auto& figure : figures) {
        std::cout << figure -> getName() << ":" << std::endl;
        std::cout << (figure->check() ? "Правильная" : "Неправильная") << std::endl;
        figure->printParam();
        std::cout << std::endl;
    }

    return 0;
}
