add_library(
    trying
    Leap/leap.h
    Leap/leap.cpp
    ReverseString/reverseString.h
    ReverseString/reverseString.cpp
    SpaceAge/space_age.h
    SpaceAge/space_age.cpp
    Triangle/triangle.h
    Triangle/triangle.cpp
    Grains/grains.h
    Grains/grains.cpp
    Raindrops/raindrops.h
    Raindrops/raindrops.cpp
    Pangram/pangram.h
    Pangram/pangram.cpp
    TwoFer/two_fer.h
    TwoFer/two_fer.cpp
    GradeSchool/grade_school.h
    GradeSchool/grade_school.cpp
    Hamming/hamming.h
    Hamming/hamming.cpp
    NucleotideCount/nucleotide_count.h
    NucleotideCount/nucleotide_count.cpp
)

target_include_directories(trying PUBLIC "{CMAKE_CURRENT_SOURCE_DIR}")