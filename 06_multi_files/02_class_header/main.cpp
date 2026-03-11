#include <iostream>
#include "counter.hpp"

int main(int argc, char** argv) {
    std::string answer;
    Counter counter;
    while(true) {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> answer;
        if(answer == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            int initialValue;
            std::cin >> initialValue;
            counter = Counter(initialValue);
            break; 
        } else if(answer == "нет") {
            break;
        } else {
            std::cout << "Неизвестная команда" << std::endl;
        }
    }
    
    char command;
    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
    std::cin >> command;
    while(command != 'x') {
        switch (command) {
            case '+':
                counter.incrementer();
                break;
            case '-':
                counter.decrementer();
                break;
            case '=':
                std::cout << counter.showCounter() << std::endl;
                break;
            case 'x':
                std::cout << "До свидания!" << std::endl;
                break;
            default:
                std::cout << "Неизвестная команда" << std::endl;
                break;
        }
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;    
    }

    return 0;
}