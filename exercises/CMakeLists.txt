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
)

target_include_directories(trying PUBLIC "{CMAKE_CURRENT_SOURCE_DIR}")