#include "pangram.h"
#include <iostream>
#include <bitset>
#include <string>

namespace pangram {
    bool is_pangram(std::string sentence) {
        if (sentence.length() >= 26) {
            std::bitset<26> letters;
            for (const char c: sentence) {
                if (std::isalpha(c)) {
                    letters.set(std::tolower(c) - 'a');
                }
            }
            return letters.all();
        } else {
            return false;
        }
    }
}