#include "../exercises/Leap/leap.h"
#include "../exercises/ReverseString/reverseString.h"
#include "../exercises/SpaceAge/spaceAge.h"
#include <iostream>

int main() {
    bool menu = true;
    while (menu) {
        int choice;
        std::cout << "1. Leap" << std::endl;
        std::cout << "2. Reverse String" << std::endl;
        std::cout << "3. Space Age" << std::endl;
        std::cout << "4. Triangle" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cin >> choice;
        system("cls");
        switch (choice) {
            case 1: {
                int year;
                std::cout << "Enter a year : " << std::endl;
                std::cin >> year;
                if (leap::leap_year(year))
                    {
                std::cout << "It is a leap year." << std::endl;
                } else {
                    std::cout << "It is not a leap year." << std::endl;
                }
                break;
            }
            case 2: {
                std::string phrase;
                std::cout << "Enter a string" << std::endl;
                std::cin >> phrase;
                std::cout << reverseString::reverse(phrase) << std::endl;
                break;
            }
            case 3: {
                long double ageSeconds;
                std::cout << "Enter age in seconds" << std::endl;
                std::cin >> ageSeconds;
                spaceAge::otherYears(ageSeconds);
                break;
            }
            case 0: {
                menu = false;
            }
        }
    }
    return 0;
}