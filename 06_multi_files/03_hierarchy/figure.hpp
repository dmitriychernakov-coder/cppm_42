#include <iostream>
#pragma once

class Figure {
protected:
    std::string name;
public:
    virtual void printParam() = 0;
};