#include "nth_prime.h"
#include <iostream>

namespace nth_prime {
    int nth(int n) {
        if (n < 1) {
            throw(std::domain_error("ahhhhhh"));
        } else {
            int prime = 1;
            int counter = 1;
            while (prime <= n) {
                counter++;
                if (isPrime(counter)) {
                    prime++;
                }
            }
            return counter;
        }
    }

    bool isPrime(int counter) {
        if (counter == 2) {
            return true;
        }
        for (int i = 2; i < counter; i++) {
            if (counter % i == 0) {
                return false;
            }
        }
        return true;
    }
}