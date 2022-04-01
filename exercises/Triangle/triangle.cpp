#include "triangle.h"
#include <iostream>

namespace triangle {
    flavor kind(double a, double b, double c) {
        if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                return flavor::equilateral;
            } else if (a == b || b == c || a == c) {
                return flavor::isosceles;
            } else {
                return flavor::scalene;
            }
        } else {
            throw std::domain_error("This isn't possible");
        }
    }
}