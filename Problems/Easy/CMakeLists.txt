project(easy)

add_library(easy STATIC)
target_include_directories(easy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)
target_sources(
  easy
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/ConcatenationOfArray.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/ContainsDuplicate.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/TwoSum.cpp)
