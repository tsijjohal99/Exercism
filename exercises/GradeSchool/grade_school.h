#pragma once
#include <iostream>
#include <vector>
#include <map>

namespace grade_school {
    class school {
        private:
            std::map<int, std::vector<std::string>> school_roster;
        public:
            school();
            std::map<int, std::vector<std::string>> roster() const;
            std::vector<std::string> grade(const int year) const;
            void add(const std::string name, const int year); 
    };
}