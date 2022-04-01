#include "hamming.h"
#include <iostream>

namespace hamming {
    int compute(std::string a, std::string b) {
        int hamming_distance = 0;
        if (a.size() == b.size()) {
            for (std::string::size_type i = 0; i < a.size(); i++) {
                if (a[i] != b[i]) {
                    ++hamming_distance;
                } 
                }
        } else {
            throw std::domain_error("not the same length");
        }
        return hamming_distance;
    }
}