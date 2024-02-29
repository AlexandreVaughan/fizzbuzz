add_library(libfizzbuzz fizzbuzz.cpp)

target_include_directories(libfizzbuzz PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
