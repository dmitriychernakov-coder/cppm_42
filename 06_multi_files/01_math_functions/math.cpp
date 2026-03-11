#include "math.hpp"
#include <cstdlib>
// int Calculator::power_2(int x) {
//     return x * x;
// }
// int Calculator::add(int a, int b) {
//     return a + b;
// }
// int Calculator::extract(int a, int b) {
//     return a - b;
// }
// int Calculator::multiplicat(int a, int b) {
//     return a * b;
// }
// double Calculator::devide(int a, int b) {
//     return a / b;
// }
// double Calculator::power(int a, int count) {
//     double p{1};
//     for ( int  i = 0; i < abs(count); ++i)
    
//     {
//        p *= a  ;
//     }
//     if (count < 0)
//     {
//         p = 1 / p;
//     }
    
//     return p;
// }


double add(double a, double b) {
    return a + b;
}
double extract(double a, double b) {
    return a - b;
}
double multiplicat(double a, double b) {
    return a * b;
}
double devide(double a, double b) {
    return a / b;
}
double power(double a, double count) {
    double p{1};
    for ( int  i = 0; i < abs(count); ++i)
    
    {
       p *= a  ;
    }
    if (count < 0)
    {
        p = 1 / p;
    }
    
    return p;
}
