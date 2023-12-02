#pragma once
#include "date.h"

class Base
{
    double height;
    double value;
    Date currDate;

public:
    Base readBase(std::ifstream& in, Base& curBase);
    void writeBase();
};

