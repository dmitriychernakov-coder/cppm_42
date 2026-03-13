#pragma once
#include <iostream>

class Figure {
protected:
    std::string name;
public:
    virtual void printParam() = 0;
};