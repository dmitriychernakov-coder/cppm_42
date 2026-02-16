// Name        : main.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Enter two num for calc in C++, Ansi-style
//============================================================================

#include <iostream>

class Calculator {
    double num1;
    double num2;
public:
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this -> num1 = num1;
            return true;
        }
        return false;
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this -> num2 = num2;
            return true; 
        }
        return false;
    }
};

int main(int argc, char** argv) {
    Calculator calc;
    double number1, number2;
    while (true) {
        std::cout << "Введите num1: ";
        std::cin >> number1;
        while (!calc.set_num1(number1)) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> number1;
        }
        std::cout << "Введите num2: ";
        std::cin >> number2;
        while (!calc.set_num2(number2)) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> number2;
        }
        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
    }
    
return 0;
}
