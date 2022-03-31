#include "leap.h"

#include <iostream>

bool leap::leap_year(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}