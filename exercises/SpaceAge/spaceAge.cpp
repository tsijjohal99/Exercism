#include "spaceAge.h"
#include <iostream>

void spaceAge::otherYears(long double ageSeconds) {
    long double earthYears = ageSeconds/31557600;
    std::cout << "Mercury Years = " << earthYears*0.2408467 << std::endl;
    std::cout << "Venus Years = " << earthYears*0.61519726 << std::endl;
    std::cout << "Earth Years = " << earthYears << std::endl;
    std::cout << "Mars Years = " << earthYears*1.8808158 << std::endl;
    std::cout << "Jupiter Years = " << earthYears*11.862615 << std::endl;
    std::cout << "Saturn Years = " << earthYears*29.447498 << std::endl;
    std::cout << "Uranus Years = " << earthYears*84.016846 << std::endl;
    std::cout << "Neptune Years = " << earthYears*164.79132 << std::endl;
}