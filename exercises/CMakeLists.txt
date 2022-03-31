add_library(
    trying
    Leap/leap.h
    Leap/leap.cpp
    ReverseString/reverseString.h
    ReverseString/reverseString.cpp
    SpaceAge/spaceAge.h
    SpaceAge/spaceAge.cpp
)

target_include_directories(trying PUBLIC "{CMAKE_CURRENT_SOURCE_DIR}")