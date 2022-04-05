#pragma once
#include <iostream>
#include <vector>
#include <map>

namespace nucleotide_count {

    const std::vector<char> nucleotides {'A', 'C', 'G', 'T'};

    class counter {

        private:
            std::map<char,int> _nucleotide_counts;
            std::string nucleo_characters = "ACGT";

        protected:
            bool is_valid_nucleotide(char nucleo) const;

        public:
            counter(const std::string seq);
            std::map<char, int> nucleotide_counts() const;
            int count(char nucleo) const;

    };
}