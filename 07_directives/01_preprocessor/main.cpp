#include <iostream>
#define MODE 1
#ifndef MODE
    #error Необходимо определить MODE
#endif

#if MODE == 0
    int main(int argc, char** argv) {
        std::cout << "Работаю в режиме тренировки" << std::endl;
        return 0;
    }
#elif MODE == 1
    int add( int a, int b) {
        return a + b;
    }
    int  main(int argc, char** argv) {
        int a, b;
        std::cout << "Работаю в боевом режиме" << std::endl;
        std::cout << "Введите число 1: ";
        std::cin >> a; 
        std::cout << "Введите число 2: ";
        std::cin >> b;
        int c = add(a,b);
        std::cout << "Результат сдожения: " << c << std::endl;
        return 0;

    }
#else 
    int  main(int argc, char** argv) {
        std::cout << "Неизвестный режим. Завершение работы" << std::endl;
        return 0;
    }
#endif

