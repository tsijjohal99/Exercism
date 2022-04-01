#include "grains.h"
#include <iostream>
#include <cmath>

namespace grains {
    unsigned long long int square(unsigned short square) {
        return pow(2, square - 1);
    }
    unsigned long long int total() {
        int total = 0;
        for (int i = 1; i <= 64; i++) {
            total += square(i);
        }
        return total;
    }
}