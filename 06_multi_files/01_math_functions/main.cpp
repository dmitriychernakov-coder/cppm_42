#include <iostream>
#include "math.hpp"
int main(int argc, char** argv) {
    //Calculator c;
    //std::cout << c.power_2(5) << std::endl; // 25
    double num1, num2;
    
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    int oper;
    std::cout << "Выберите операцию:\n";
    std::cout << "1 - сложение\n";
    std::cout << "2 - вычитание\n";
    std::cout << "3 - умножение\n";
    std::cout << "4 - деление\n";
    std::cout << "5 - возведение в степень\n";
    std::cin >> oper;
    
    
    // switch(oper) {
    //     case 1:
    //         std::cout << num1 << " + " << num2 << " = " << c.add(num1, num2) << std::endl;
    //         break;
    //     case 2:
    //         std::cout << num1 << " - " << num2 << " = " << c.extract(num1, num2) << std::endl;
    //         break;
    //     case 3:
    //         std::cout << num1 << " * " << num2 << " = " << c.multiplicat(num1, num2) << std::endl;
    //         break;
    //     case 4:
    //         std::cout << num1 << " / " << num2 << " = " << c.devide(num1, num2) << std::endl;
    //         break;
    //     case 5:
    //         std::cout << num1 << " в степени " << num2 << " = " << c.power(num1, num2) << std::endl;
    //         break;
    //     default:
    //         std::cout << "Неверная операция!\n";
    //         break;
    // }

     switch(oper) {
        case 1:
            std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << num1 << " - " << num2 << " = " << extract(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << num1 << " * " << num2 << " = " << multiplicat(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << num1 << " / " << num2 << " = " << devide(num1, num2) << std::endl;
            break;
        case 5:
            std::cout << num1 << " в степени " << num2 << " = " << power(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Неверная операция!\n";
            break;
    }
    
return 0;
}