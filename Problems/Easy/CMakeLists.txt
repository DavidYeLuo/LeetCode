project(easy)

add_library(easy STATIC)
target_include_directories(easy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)
target_sources(
  easy
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/ConcatenationOfArray.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/ContainsDuplicate.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/TwoSum.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/DesignHashSet.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/DesignHashMap.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/SumRangeQueryImmutable.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/FindPivotIndex.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/ValidAnagram.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/BaseballGame.cpp)
