#include "grade_school.h"
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

namespace grade_school {

    school::school() {}

    std::map<int, std::vector<std::string>> school::roster() const {
        return this->school_roster;
    }

    std::vector<std::string> school::grade(const int year) const {
        if (this->school_roster.find(year) == this->school_roster.end()) {
            return std::vector<std::string> {};
        }
        return this->school_roster.at(year);
    }

    void school::add(const std::string name, const int year) {
        this->school_roster[year].push_back(name);
        std::sort(this->school_roster[year].begin(), this->school_roster[year].end());
    }
}