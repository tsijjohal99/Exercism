#include "rna_transcription.h"
#include <iostream>

namespace rna_transcription {

    char to_rna(char dna) {
        switch (dna) {
            case 'G': {
                return 'C';
                break;
            }
            case 'C': {
                return 'G';
                break;
            }
            case 'T': {
                return 'A';
                break;
            }
            case 'A': {
                return 'U';
                break;
            }
            default: {
                throw(std::invalid_argument("not applicable"));
            }
        }
    }

    std::string to_rna(std::string dna) {
        std::string rna = "";
        for (const char c: dna) {
            rna += to_rna(c);
        }
        return rna;
    }
}