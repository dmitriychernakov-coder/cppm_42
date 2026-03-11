#include "counter.hpp"

    Counter::Counter() : number(1) {}
    Counter::Counter(int setNumber) : number(setNumber) {}
    void Counter::incrementer() {++number;}
    void Counter::decrementer() {--number;}
    int Counter::showCounter() {return number;}

