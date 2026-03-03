#include <iostream>
#include <iostream>

class Figure {
protected:
    std::string name;
public:
    virtual void printParam() = 0;
};

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
    void printParam()  override {
        std::cout << std::endl;
        std::cout << name << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
    
};

class RecTriangle : public Triangle {
public:
    RecTriangle(double a, double b, double c, double A, double B)
        : Triangle("Прямоугльный треугольник", a, b, c, A, B, 90) {} 
};

class IsoTriangle : public Triangle {
public:
    IsoTriangle(double a, double b, double A, double B)
        : Triangle("Равнобедренный треугольник", a, b, a, A, B, A) {} 
};

class EquTriangle : public Triangle {
public:
    EquTriangle(double a, double A)
        : Triangle("Равносторонний треугольник", a, a, a, A, A, A) {} 
};


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
    void printParam()  override {
        std::cout << std::endl;
        std::cout << name << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
    
};

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b)
        : Quadrangle("Прямоугольник", a, b, a, b, 90, 90, 90, 90) {}
};

class Square : public Quadrangle {
public:
    Square(double a)
        : Quadrangle("Квадрат",a, a, a, a, 90, 90, 90, 90) {}
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double A, double B)
        : Quadrangle("Параллелограмм", a, b, a, b, A, B, A, B) {}
};

class Romb : public Quadrangle {
public:
    Romb(double a, double A, double B)
        : Quadrangle("Ромб", a, a, a, a, A, B, A, B) {}
};




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
