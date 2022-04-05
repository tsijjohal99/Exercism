#include "collatz_conjecture.h"
#include <iostream>

namespace collatz_conjecture {

    int steps(int n) {
        int step = 0;
        if (n < 1) throw std::domain_error("oh dear");
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
            step++;
        }
        return step;
    }
}