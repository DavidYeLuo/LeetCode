project(ConcatenationOfArray)
add_library(ConcatenationOfArray STATIC)
target_include_directories(ConcatenationOfArray
                           PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_sources(ConcatenationOfArray PRIVATE ConcatenationOfArray.cpp)
