#include "reverseString.h"
#include <iostream>

std::string reverseString::reverse(std::string phrase) {
    int len = phrase.length();
    int n = len - 1;
    for (int i = 0; i < len/2; i++) {
        char temp = phrase[i];
        phrase[i] = phrase[n];
        phrase[n] = temp;
        n--;
    }
    return phrase;
}