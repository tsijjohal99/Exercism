#include "nucleotide_count.h"
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>

namespace nucleotide_count {
    counter::counter(const std::string seq)
        : _nucleotide_counts({ {'A' ,0 }, {'C', 0}, {'G', 0}, {'T', 0}}) {
        
        for (const char c: seq) {
            bool charFound = false;
            for (const char d: nucleo_characters) {
                if (c == d) {
                    charFound = true;
                    ++_nucleotide_counts[c];
                    break;
                }
            }
            if (!charFound) {
                throw(std::invalid_argument(seq));
            }
        }
    }

    std::map<char, int> counter::nucleotide_counts() const {
        return _nucleotide_counts;
    }

    int counter::count(char nucleo) const {
        if (is_valid_nucleotide(nucleo)) {
            return _nucleotide_counts.at(nucleo);
        } else {
            throw(std::invalid_argument("not possible"));
        }
    }

    bool counter::is_valid_nucleotide(char nucleo) const {
        return (_nucleotide_counts.find(nucleo) != _nucleotide_counts.end());
    }
}